package gogre3d

/* 
 #cgo LDFLAGS: -lllcoi
 #cgo CFLAGS: -I./llcoihdr
 #include "ogre_interface.h"
*/
import "C"

func SetDefaultNumMipmaps(num int) {
	C.set_default_num_mipmaps(C.int(num))
}
