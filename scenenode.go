package gogre3d

/* 
 #cgo LDFLAGS: -lllcoi
 #cgo CFLAGS: -I./llcoihdr
 #include "ogre_interface.h"
*/
import "C"

type SceneNode struct {
	cptr C.SceneNodeHandle
}

func (n *SceneNode) Attach(e Entity) {
	C.scenenode_attach_entity(n.cptr, e.cptr)
}

func (n *SceneNode) Detach(e Entity) {
	C.scenenode_detach_entity(n.cptr, e.cptr)
}

func (n *SceneNode) SetPosition(x, y, z float32) {
	C.scenenode_set_position(n.cptr, C.float(x), C.float(y), C.float(z))
}
