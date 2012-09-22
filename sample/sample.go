package main 

import "github.com/galaktor/gogre3d"

func main() {
	root := gogre3d.NewRoot("", "", "ogre.log")
	// setup OpenGL                                                               
        root.LoadPlugin("RenderSystem_GL")
        rs := root.GetRenderSystemByName("OpenGL Rendering Subsystem")
        rs.SetConfigOption("Full Screen", "No")
        rs.SetConfigOption("VSync", "No")
        rs.SetConfigOption("Video Mode", "800 x 600 @ 32-bit")
        root.SetRenderSystem(rs)

	window := root.Initialise(true, "MyWindow")
	sm := root.CreateSceneManager("DefaultSceneManager", "The SceneManager")
	cam := sm.CreateCamera("MyCamera")
	cam.SetPosition(0, 0, 80)
	cam.LookAt(0, 0, -300)
	cam.SetNearClipDistance(5)

	vp := window.AddViewport(cam)
	vp.SetBackgroundColour(0, 0, 0)
	
	cam.SetAspectRatio(vp.GetWidth(), vp.GetHeight())
	
	gogre3d.SetDefaultNumMipmaps(5)

	gogre3d.AddResourceLocation("./media/fonts", "FileSystem", "Default")
	gogre3d.AddResourceLocation("./media/models", "FileSystem", "Default")
	gogre3d.AddResourceLocation("./media/materials/scripts", "FileSystem", "Default")
	gogre3d.AddResourceLocation("./media/materials/programs", "FileSystem", "Default")
	gogre3d.AddResourceLocation("./media/materials/textures", "FileSystem", "Default")
	gogre3d.InitialiseAllResourceGroups()

	head := sm.CreateEntity("Head", "ogrehead.mesh")
	headnode := gogre3d.CreateChildSceneNode("Head")
	headnode.Attach(head)

	sm.SetAmbientLight(0.5, 0.5, 0.5, 0)
	
	light := sm.CreateLight("MyLight")
	light.SetPosition(20, 80, 50)

	for {
		gogre3d.MessagePump()
		if window.IsClosed() {
			root.ReleaseEngine()
			return
		}

		if error := root.RenderOneFrame(); error == false {
			root.ReleaseEngine()
			return
		}
	}
}