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
	// TODO: hold cptr to modify width/height
	width, height int
	X, Y, Z Axis
	Buttons int
}

func (m *MouseState) Width() int {
	return m.width
}

func (m *MouseState) SetWidth(w int) {
	
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



func goMouseState(s *C.MouseState) MouseState {
	return MouseState{
		width: int(s.width),
		height: int(s.height),
		X: goAxis(&s.X),
		Y: goAxis(&s.Y),
		Z: goAxis(&s.Z),
		Buttons: int(s.buttons),
	}
}

func goAxis(a *C.Axis) Axis {
	return Axis{
		Abs: gobool(a.abs),
		Rel: gobool(a.rel),
		AbsOnly: gobool(a.absOnly),
	}
}

func (m *Mouse) State() MouseState {
	cms := C.mouse_get_state(m.cptr)
	return goMouseState(&cms)
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