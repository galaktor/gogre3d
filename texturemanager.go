package gogre3d

/* 
 #cgo LDFLAGS: -lllcoi
 #cgo CFLAGS: -I./llcoihdr
 #include "ogre_interface.h"
*/
import "C"

func SetDefaultNumMipmaps(num int) {
	tm := C.texturemanager_singleton()
	C.texturemanager_set_default_num_mipmaps(tm, C.int(num))
}
