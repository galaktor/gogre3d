package gogre3d

/* 
 #cgo LDFLAGS: -lllcoi
 #include "ogre_interface.h"
*/
import "C"

type Camera struct {
	cptr C.CameraHandle
}

func (c *Camera) SetPosition(x, y, z float32) {
	C.camera_set_position(c.cptr, C.float(x), C.float(y), C.float(z))
}

func (c *Camera) LookAt(x, y, z float32) {
	C.camera_lookat(c.cptr, C.float(x), C.float(y), C.float(z))
}

func (c *Camera) SetNearClipDistance(distance float32) {
	C.camera_set_near_clip_distance(c.cptr, C.float(distance))
}

func (c *Camera) SetAspectRatio(width, height float32) {
	C.camera_set_aspect_ratio(c.cptr, C.float(width), C.float(height))
}
