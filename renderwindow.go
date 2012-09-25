package gogre3d

/* 
 #cgo LDFLAGS: -lllcoi
 #cgo CFLAGS: -I./llcoihdr
 #include "ogre_interface.h"
*/
import "C"

type RenderWindow struct {
	cptr C.RenderWindowHandle
}

func (rw *RenderWindow) AddViewport(c Camera) Viewport {
	var result Viewport
	result.cptr = C.add_viewport(rw.cptr, c.cptr)

	return result
}

func (rw *RenderWindow) IsClosed() bool {
	result := C.render_window_closed(rw.cptr)
	return gobool(result)
}

func MessagePump() {
	C.pump_messages()
}
