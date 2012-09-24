/*
Ogre3d bindings for Go. Uses llcoi to bind to ogre via c.
*/

package gogre3d

/* 
 #cgo LDFLAGS: -lllcoi
 #include "ogre_interface.h"
// #include "ois_interface.h"
*/
import "C"

type Root struct {
	CPtr C.RootHandle
}

func NewRoot(pluginsCfg, ogreCfg, logfile string) Root {
	var result Root
	result.CPtr = C.create_root(C.CString(pluginsCfg), C.CString(ogreCfg), C.CString(logfile))

	return result
}

func (r *Root) ReleaseEngine() {
	C.release_engine()
	r.CPtr = nil
}

func (r *Root) GetRenderSystemByName(name string) RenderSystem {
	var result RenderSystem
	result.CPtr = C.get_render_system_by_name(C.CString(name))

	return result
}

func (r *Root) SetRenderSystem(s RenderSystem) {
	C.set_render_system(s.CPtr)
}

func (r *Root) ShowConfigDialog() bool {
	result := C.show_config_dialog()
	return gobool(result)
}

func (r *Root) Initialise(createWindow bool, windowTitle string) RenderWindow {
	var result RenderWindow
	result.CPtr = C.root_initialise(cbool(createWindow), C.CString(windowTitle))

	return result
}

func (r *Root) CreateSceneManager(typename, instancename string) SceneManager {
	var result SceneManager
	result.CPtr = C.create_scene_manager(C.CString(typename), C.CString(instancename))

	return result
}

func (r *Root) RenderOneFrameEx(timestep float32) bool {
	return gobool(C.render_one_frame_ex(C.float(timestep)))
}

func (r *Root) RenderOneFrame() bool {
	return gobool(C.render_one_frame())
}

func (r *Root) LoadPlugin(name string) {
	C.load_ogre_plugin(C.CString(name))
}
