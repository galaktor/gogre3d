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
	result.cptr = C.create_camera(sm.cptr, C.CString(name))

	return result
}

func (sm *SceneManager) CreateEntity(name, meshfile string) Entity {
	var result Entity
	result.cptr = C.create_entity(sm.cptr, C.CString(name), C.CString(meshfile))

	return result
}

func (sm *SceneManager) CreateLight(name string) Light {
	var result Light
	result.cptr = C.create_light(sm.cptr, C.CString(name))

	return result
}

func (sm *SceneManager) SetAmbientLight(r, g, b, a float32) {
	C.set_ambient_light_rgba(sm.cptr, C.float(r), C.float(g), C.float(b), C.float(a))
}

func (sm *SceneManager) CreateChildSceneNode(name string) SceneNode {
	var result SceneNode
	result.cptr = C.create_child_scenenode(sm.cptr, C.CString(name))

	return result
}
