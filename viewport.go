package gogre3d

/* 
 #cgo LDFLAGS: -lllcoi
 #cgo CFLAGS: -I./llcoihdr
 #include "ogre_interface.h"
*/
import "C"

type Viewport struct {
	cptr C.ViewportHandle
}

func (v *Viewport) SetBackgroundColour(r, g, b, a float32) {
	C.viewport_set_background_colour(v.cptr, C.float(r), C.float(g), C.float(b), C.float(a))
}

func (v *Viewport) GetActualWidth() float32 {
	result := C.viewport_get_actual_width(v.cptr)
	return float32(result)
}

func (v *Viewport) GetActualHeight() float32 {
	result := C.viewport_get_actual_height(v.cptr)
	return float32(result)
}
