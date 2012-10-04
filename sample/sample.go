package main 

import (
	"time"
	"github.com/galaktor/gogre3d"
)

func main() {
	// CONFIGURATION
	root := gogre3d.NewRoot("", "", "ogre.log")
        root.LoadPlugin("RenderSystem_GL")
        rs := root.GetRenderSystemByName("OpenGL Rendering Subsystem")
        rs.SetConfigOption("Full Screen", "No")
        rs.SetConfigOption("VSync", "No")
        rs.SetConfigOption("Video Mode", "800 x 600 @ 32-bit")
        root.SetRenderSystem(rs)

	// VIEW
	window := root.Initialise(true, "gogre3d sample")
	sm := root.CreateSceneManager("DefaultSceneManager", "The SceneManager")
	cam := sm.CreateCamera("MyCamera")
	cam.SetPosition(0, 0, 80)
	cam.LookAt(0, 0, -300)
	cam.SetNearClipDistance(5)
	vp := window.AddViewport(cam)
	vp.SetBackgroundColour(0.01, 0, 0, 0)
	cam.SetAspectRatio(vp.GetActualWidth(), vp.GetActualHeight())
	gogre3d.SetDefaultNumMipmaps(5)

	// RESOURCES
	rgm := gogre3d.GetResourceGroupManager()
	rgm.AddResourceLocation("./media/fonts", "FileSystem", "Default")
	rgm.AddResourceLocation("./media/models", "FileSystem", "Default")
	rgm.AddResourceLocation("./media/materials/scripts", "FileSystem", "Default")
	rgm.AddResourceLocation("./media/materials/programs", "FileSystem", "Default")
	rgm.AddResourceLocation("./media/materials/textures", "FileSystem", "Default")
	rgm.InitialiseAllResourceGroups()

	// SCENE
	sm.SetAmbientLight(0.5, 0.5, 0.5)
	head := sm.CreateEntity("Head", "ogrehead.mesh", "Default")
	headnode := sm.CreateChildSceneNode("Head")
	headnode.Attach(head)
	light := sm.CreateLight("MyLight")
	light.SetPosition(20, 80, 50)
	
	// INPUT
	i := gogre3d.NewInput(window)
	kb := i.NewKeyboard(false)
	m := i.NewMouse(false)
	m.DisplayArea(800, 600)

	// LOOP
	ticker := time.Tick(40 * time.Millisecond)
	running := true
	for running {
		gogre3d.MessagePump()
		if window.IsClosed() {
			running = false
			break
		}

		// KEYBOARD CONTROLS
		kb.Capture()
		if kb.KeyDown(gogre3d.KC_LEFT){
			headnode.Yaw(-0.1, gogre3d.TS_LOCAL)
		}
		if kb.KeyDown(gogre3d.KC_RIGHT) {
			headnode.Yaw(0.1, gogre3d.TS_LOCAL)
		}
		if kb.KeyDown(gogre3d.KC_UP) {
			headnode.Pitch(-0.1, gogre3d.TS_LOCAL)
		}
		if kb.KeyDown(gogre3d.KC_DOWN) {
			headnode.Pitch(0.1, gogre3d.TS_LOCAL)
		}
		if kb.KeyDown(gogre3d.KC_ESCAPE) {
			running = false
			break
		}

		// MOUSE CONTROLS
		m.Capture()
		ms := m.State()
		headnode.Yaw(0.01 * float32(ms.X.Rel), gogre3d.TS_WORLD)
		headnode.Pitch(0.01 * float32(ms.Y.Rel), gogre3d.TS_WORLD)
		if  ms.ButtonPressed(gogre3d.MB_Left) {
			headnode.ResetOrientation()
		}


		// RENDER SCENE
		if error := root.RenderOneFrame(); error == false {
			running = false
			break
		}

		// THROTTLE FRAMERATE
		<-ticker
	}

	// CLEANUP
	root.Destroy()
	return
}