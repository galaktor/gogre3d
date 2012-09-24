package gogre3d

/* 
 #cgo LDFLAGS: -lllcoi
 #include "ogre_interface.h"
*/
import "C"

type SceneNode struct {
	CPtr C.SceneNodeHandle
}

func (n *SceneNode) Attach(e Entity) {
	C.attach_entity_to_scenenode(e.CPtr, n.CPtr)
}

func (n *SceneNode) Detach(e Entity) {
	C.scenenode_detach_entity(n.CPtr, e.CPtr)
}

func (n *SceneNode) SetPosition(x, y, z float32) {
	C.scenenode_set_position(n.CPtr, C.float(x), C.float(y), C.float(z))
}
