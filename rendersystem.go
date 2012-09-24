package gogre3d

/* 
 #cgo LDFLAGS: -lllcoi
 #include "ogre_interface.h"
*/
import "C"

type RenderSystem struct {
	CPtr C.RenderSystemHandle
}

func (r *RenderSystem) SetConfigOption(key, value string) {
	C.render_system_set_config_option(r.CPtr, C.CString(key), C.CString(value))
}
