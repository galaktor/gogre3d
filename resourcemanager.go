package gogre3d

/* 
 #cgo LDFLAGS: -lllcoi
 #cgo CFLAGS: -I./llcoihdr
 #include "ogre_interface.h"
*/
import "C"

func AddResourceLocation(location, locationType, group string) {
	C.add_resource_location(C.CString(location), C.CString(locationType), C.CString(group))
}

func InitialiseAllResourceGroups() {
	C.initialise_all_resourcegroups()
}
