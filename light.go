package gogre3d

/* 
 #cgo LDFLAGS: -lllcoi
 #include "ogre_interface.h"
*/
import "C"

type Light struct {
	CPtr C.LightHandle
}

func (l *Light) SetPosition(x, y, z float32) {
	C.light_set_position(l.CPtr, C.float(x), C.float(y), C.float(z))
}
