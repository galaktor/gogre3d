package gogre3d

/* 
 #cgo LDFLAGS: -lllcoi
 #cgo CFLAGS: -I./llcoihdr
 #include "ogre_interface.h"
*/
import "C"

type SceneManager struct {
	cptr C.SceneManagerHandle
}

func (sm *SceneManager) CreateCamera(name string) Camera {
	var result Camera
	result.cptr = C.scenemanager_create_camera(sm.cptr, C.CString(name))

	return result
}

func (sm *SceneManager) CreateEntity(name, meshfile, groupname string) Entity {
	var result Entity
	result.cptr = C.scenemanager_create_entity(sm.cptr, C.CString(name), C.CString(meshfile), C.CString(groupname))

	return result
}

func (sm *SceneManager) CreateLight(name string) Light {
	var result Light
	result.cptr = C.scenemanager_create_light(sm.cptr, C.CString(name))

	return result
}

func (sm *SceneManager) SetAmbientLight(r, g, b float32) {
	C.scenemanager_set_ambient_light_rgb(sm.cptr, C.float(r), C.float(g), C.float(b))
}

func (sm *SceneManager) CreateChildSceneNode(name string) SceneNode {
	var result SceneNode
	result.cptr = C.create_child_of_root_scenenode(sm.cptr, C.CString(name))

	return result
}
