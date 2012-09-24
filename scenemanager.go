package gogre3d

/* 
 #cgo LDFLAGS: -lllcoi
 #include "ogre_interface.h"
*/
import "C"

type SceneManager struct {
	CPtr C.SceneManagerHandle
}

func (sm *SceneManager) CreateCamera(name string) Camera {
	var result Camera
	result.CPtr = C.create_camera(C.CString(name))

	return result
}

func (sm *SceneManager) CreateEntity(name, meshfile string) Entity {
	var result Entity
	result.CPtr = C.create_entity(C.CString(name), C.CString(meshfile))

	return result
}

func (sm *SceneManager) CreateLight(name string) Light {
	var result Light
	result.CPtr = C.create_light(C.CString(name))

	return result
}

func (sm *SceneManager) SetAmbientLight(r, g, b, a float32) {
	C.set_ambient_light_rgba(C.float(r), C.float(g), C.float(b), C.float(a))
}

func CreateChildSceneNode(name string) SceneNode {
	var result SceneNode
	result.CPtr = C.create_child_scenenode(C.CString(name))

	return result
}
