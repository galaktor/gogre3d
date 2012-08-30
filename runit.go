// +build ignore

package main 

import "."

func main() {
	root := gogre3d.NewRoot("plugins.cfg", "", "ogre.log")
	if cancel := !root.ShowConfigDialog(); cancel == true {
		root.Delete()
		return
	}

	window := root.Initialise(true, "MyWindow")
	sm := root.CreateSceneManager()
	cam := sm.CreateCamera("MyCamera")
	cam.SetPosition(0, 0, 80)
	cam.LookAt(0, 0, -300)
	cam.SetNearClipDistance(5)

	vp := window.AddViewport(cam)
	vp.SetBackgroundColour(0, 0, 0, 0)
	
	w, h := vp.GetActualWidth(), vp.GetActualHeight()
	cam.SetAspectRatio(w / h)
	
	tm := gogre3d.GetTextureManager()
	tm.SetDefaultNumMipmaps(5)

	rm := gogre3d.GetResourceGroupManager()
	rm.AddResourceLocation("./Media/fonts", "FileSystem")
	rm.AddResourceLocation("./Media/models", "FileSystem")
	rm.AddResourceLocation("./Media/materials/scripts", "FileSystem")
	rm.AddResourceLocation("./Media/materials/programs", "FileSystem")
	rm.AddResourceLocation("./Media/materials/textures", "FileSystem")
	rm.InitialiseAllResourceGroups()

	head := sm.CreateEntity("Head", "ogrehead.mesh")
	rnode := sm.GetRootSceneNode()
	headnode := rnode.CreateChildSceneNode()
	headnode.AttachObject(head)

	sm.SetAmbientLight(0.5, 0.5, 0.5, 0)
	
	light := sm.CreateLight("MyLight")
	light.SetPosition(20, 80, 50)

	for {
		gogre3d.MessagePump()
		if window.IsClosed() {
			root.Delete()
			return
		}

		if error := root.RenderOneFrame(); error == false {
			root.Delete()
			return
		}
	}
}