package gogre3d

/* 
 #cgo LDFLAGS: -lllcoi
 #cgo CFLAGS: -I./llcoihdr
 #include "ogre_interface.h"
*/
import "C"

type ResourceGroupManager struct {
	cptr C.ResourceGroupManagerHandle
}

func GetResourceGroupManager() ResourceGroupManager {
	var result ResourceGroupManager
	result.cptr = C.resourcegroupmanager_singleton()
	return result
}

func (rgm *ResourceGroupManager) AddResourceLocation(location, locationType, group string) {
	C.resourcegroupmanager_add_resource_location(rgm.cptr, C.CString(location), C.CString(locationType), C.CString(group))
}

func (rgm *ResourceGroupManager)InitialiseAllResourceGroups() {
	C.resourcegroupmanager_initialise_all_resourcegroups(rgm.cptr)
}
