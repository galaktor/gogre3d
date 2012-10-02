package gogre3d

/*
 #cgo LDFLAGS: -lllcoi
 #cgo CFLAGS: -I./llcoihdr
 #include "ois_interface.h"
*/
import "C"

type InputManager struct {
	cptr C.InputManagerHandle
}

func NewInput(w RenderWindow) InputManager {
	var result InputManager
	result.cptr = C.create_input_system(w.Handle)
	return result
}

func (i *InputManager) Destroy() {
	C.destroy_input_system(i.cptr)
	i.cptr = nil
}

func (i *InputManager) NewKeyboard(buffered bool) {
	var result Keyboard
	result = C.create_keyboard_object(i.cptr, cbool(buffered))
	return result
}

func (i *InputManager) DestroyKeyboard(k Keyboard) {
	C.destroy_keyboard_object(i.cptr, k.cptr)
	k.cptr = nil
}

func (i *InputManager) NewMouse(buffered bool) {
	var result Mouse
	result = C.create_mouse_object(i.cptr, cbool(buffered))
	return result
}

func (i *InputManager) DestroyMouse(m Mouse) {
	C.destroy_mouse_object(i.cptr, m.cptr)
	m.cptr = nil
}
