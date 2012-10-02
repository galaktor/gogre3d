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
	Abs, Rel bool
	AbsOnly bool
}

type MouseState struct {
	Width, Height int
	X, Y, Z Axis
	Buttons int
}

type MouseButtonId uint8
const (
	MB_0_Left MouseButtonId = iota
	MB_1_Right
	MB_2_Middle
	MB_3
	MB_4
	MB_5
	MB_6
	MB_7
)

type MouseMovedEventHandler func(e MouseState, userdata interface{})bool
type MousePressedEventHandler func(e MouseState, b MouseButtonId, userdata interface{})bool
type MouseReleasedEventHandler func(e MouseState, b MouseButtonid, userdata interface{})bool

func goMouseState(s *C.MouseState) MouseState {
	return MouseState{
		Width: s.width,
		Height: s.height,
		X: s.x,
		Y: s.y,
		Z: s.z,
		Buttons: s.buttons,
	}
}

func (m *Mouse) State() MouseState {
	return goMouseState(C.mouse_get_state(m.cptr))
}

func (m *Mouse) Capture() {
	C.mouse_capture(m.cptr)
}

func (m *Mouse) Buffered(b bool) {
	C.mouse_set_buffered(m.cptr, cbool(b))
}
