/*
Ogre3d bindings for Go. Uses llcoi to bind to ogre via c.
*/

package gogre3d

/* 
 #cgo LDFLAGS: -lllcoi
 #cgo CFLAGS: -I./llcoihdr
 #include "ogre_interface.h"
// #include "ois_interface.h"
*/
import "C"

type Root struct {
	cptr C.RootHandle
}

func NewRoot(pluginsCfg, ogreCfg, logfile string) Root {
	var result Root
	result.cptr = C.create_root(C.CString(pluginsCfg), C.CString(ogreCfg), C.CString(logfile))

	return result
}

func (r *Root)Destroy() {
	C.delete_root(r.cptr)
	r.cptr = nil
}

func RootInstance() Root {
	var result Root
	result.cptr = C.root_singleton()
	
	return result
}

func (r *Root) Initialised() bool {
	return gobool(C.root_is_initialised(r.cptr))
}

func (r *Root) SaveConfig() {
	C.save_config(r.cptr)
}

func (r *Root) RestoreConfig() bool {
	return gobool(C.restore_config(r.cptr))
}

func (r *Root) GetRenderSystemByName(name string) RenderSystem {
	var result RenderSystem
	result.cptr = C.get_render_system_by_name(r.cptr, C.CString(name))

	return result
}

func (r *Root) SetRenderSystem(s RenderSystem) {
	C.set_render_system(r.cptr, s.cptr)
}

func (r *Root) ShowConfigDialog() bool {
	result := C.show_config_dialog(r.cptr)
	return gobool(result)
}

func (r *Root) Initialise(createWindow bool, windowTitle string) RenderWindow {
	var result RenderWindow
	result.cptr = C.root_initialise(r.cptr, cbool(createWindow), C.CString(windowTitle))

	return result
}

func (r *Root) CreateSceneManager(typename, instancename string) SceneManager {
	var result SceneManager
	result.cptr = C.create_scene_manager(r.cptr, C.CString(typename), C.CString(instancename))

	return result
}

func (r *Root) RenderOneFrameEx(timestep float32) bool {
	return gobool(C.render_one_frame_ex(r.cptr, C.float(timestep)))
}

func (r *Root) RenderOneFrame() bool {
	return gobool(C.render_one_frame(r.cptr))
}

func (r *Root) LoadPlugin(name string) {
	C.load_ogre_plugin(r.cptr, C.CString(name))
}


