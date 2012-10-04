package gogre3d

/*
 #cgo LDFLAGS: -lllcoi
 #cgo CFLAGS: -I./llcoihdr
 #include "ois_interface.h"
*/
import "C"

type Mouse struct {
	cptr C.MouseInputHandle
}

type Axis struct {
	Abs, Rel int
	AbsOnly bool
}

type MouseState struct {
	X, Y, Z Axis
	buttons MouseButtonId
}

type MouseButtonId uint8
const (
	_ = iota // skip 0
	MB_Left MouseButtonId = iota
	MB_Right
	MB_Middle
	MB_3
	MB_4
	MB_5
	MB_6
	MB_7
)

func (ms *MouseState) ButtonPressed(b MouseButtonId) bool {
	return ms.buttons & b == b
}

func goMouseState(s *C.MouseState) MouseState {
	return MouseState{
		X: goAxis(&s.X),
		Y: goAxis(&s.Y),
		Z: goAxis(&s.Z),
		buttons: MouseButtonId(s.buttons),
	}
}

func goAxis(a *C.Axis) Axis {
	return Axis{
		Abs: int(a.abs),
		Rel: int(a.rel),
		AbsOnly: gobool(a.absOnly),
	}
}

func (m *Mouse) State() MouseState {
	cms := C.mouse_get_state(m.cptr)
	return goMouseState(&cms)
}

func (m *Mouse) DisplayArea (width, height int) {
	C.mouse_set_display_area(m.cptr, C.int(width), C.int(height))
}

func (m *Mouse) Capture() {
	C.mouse_capture(m.cptr)
}

func (m *Mouse) Buffered(b bool) {
	C.mouse_set_buffered(m.cptr, cbool(b))
}

/* 
type MouseMovedEventHandler func(e MouseState, userdata interface{})bool
type MousePressedEventHandler func(e MouseState, b MouseButtonId, userdata interface{})bool
type MouseReleasedEventHandler func(e MouseState, b MouseButtonId, userdata interface{})bool
*/

// TODO: set mouse event
// TODO: remove mouse event