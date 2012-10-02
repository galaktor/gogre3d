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
	result.cptr = C.render_window_add_viewport(rw.cptr, c.cptr, 0, 0, 0, 1, 1)

	return result
}

func (rw *RenderWindow) IsClosed() bool {
	result := C.render_window_closed(rw.cptr)
	return gobool(result)
}

// TODO: c func takes unsigned int
func (rw *RenderWindow) Handle() int {
	return C.render_window_get_hwnd(rw.cptr)
}

func MessagePump() {
	C.pump_messages()
}
