package gogre3d

/* 
 #cgo LDFLAGS: -lllcoi
 #include "ogre_interface.h"
*/
import "C"

type SceneNode struct {
	cptr C.SceneNodeHandle
}

func (n *SceneNode) Attach(e Entity) {
	C.attach_entity_to_scenenode(e.cptr, n.cptr)
}

func (n *SceneNode) Detach(e Entity) {
	C.scenenode_detach_entity(n.cptr, e.cptr)
}

func (n *SceneNode) SetPosition(x, y, z float32) {
	C.scenenode_set_position(n.cptr, C.float(x), C.float(y), C.float(z))
}
