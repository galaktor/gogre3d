/*
Ogre3d bindings for Go via a slim C-Wrapper. By no means complete, will grow with my project (or by other contributions).
TODO: ditch custom C-Wrapper and use community C-bindings to Ogre instead
*/

package gogre3d

/*
 #cgo LDFLAGS: -L./ogrelib -lOgreMain -logrec
 #include "ogrec.h"
*/
import "C"

type Root struct {
	CPtr C.RootPtr
}

func NewRoot(pluginsCfg, ogreCfg, logfile string) Root {
	var result Root
	result.CPtr = C.New_Root(C.CString(pluginsCfg), C.CString(ogreCfg), C.CString(logfile))
	return result
}

func (r *Root) Delete() {
	C.Delete_Root(r.CPtr)
}

func (r *Root) ShowConfigDialog() bool {
	result := C.Root_ShowConfigDialog(r.CPtr)
	return gobool(result)
}

func (r *Root) Initialise(createWindow bool, windowTitle string) RenderWindow {
	var result RenderWindow
	result.CPtr = C.Root_Initialise(r.CPtr, cbool(createWindow), C.CString(windowTitle))
	return result
}

func (r *Root) CreateSceneManager() SceneManager {
	var result SceneManager
	result.CPtr = C.Root_CreateSceneManager(r.CPtr)
	return result
}

func (r *Root) RenderOneFrame() bool {
	return gobool(C.Root_RenderOneFrame(r.CPtr))
}

type RenderWindow struct {
	CPtr C.RenderWindowPtr
}

func (rw *RenderWindow) AddViewport(c Camera) Viewport {
	var result Viewport
	result.CPtr = C.RenderWindow_AddViewport(rw.CPtr, c.CPtr)
	return result
}

func (rw *RenderWindow) IsClosed() bool {
	result := C.RenderWindow_IsClosed(rw.CPtr)
	return gobool(result)
}

type SceneManager struct {
	CPtr C.SceneManagerPtr
}

func (sm *SceneManager) CreateCamera(name string) Camera {
	var result Camera
	result.CPtr = C.SceneManager_CreateCamera(sm.CPtr, C.CString(name))
	return result
}

func (sm *SceneManager) CreateEntity(name, resource string) Entity {
	var result Entity
	result.CPtr = C.SceneManager_CreateEntity(sm.CPtr, C.CString(name), C.CString(resource))
	return result
}

func (sm *SceneManager) CreateLight(name string) Light {
	var result Light
	result.CPtr = C.SceneManager_CreateLight(sm.CPtr, C.CString(name))
	return result
}

func (sm *SceneManager) GetRootSceneNode() SceneNode {
	var result SceneNode
	result.CPtr = C.SceneManager_GetRootSceneNode(sm.CPtr)
	return result
}

func (sm *SceneManager) SetAmbientLight(r, g, b, a float32) {
	C.SceneManager_SetAmbientLight(sm.CPtr, C.float(r), C.float(g), C.float(b), C.float(a))
}

type Camera struct {
	CPtr C.CameraPtr
}

func (c *Camera) SetPosition(x, y, z float32) {
	C.Camera_SetPosition(c.CPtr, C.float(x), C.float(y), C.float(z))
}

func (c *Camera) LookAt(x, y, z float32) {
	C.Camera_LookAt(c.CPtr, C.float(x), C.float(y), C.float(z))
}

func (c *Camera) SetNearClipDistance(distance float32) {
	C.Camera_SetNearClipDistance(c.CPtr, C.float(distance))
}

func (c *Camera) SetAspectRatio(ratio float32) {
	C.Camera_SetAspectRatio(c.CPtr, C.float(ratio))
}

type Viewport struct {
	CPtr C.ViewportPtr
}

func (v *Viewport) SetBackgroundColour(r, g, b, a float32) {
	C.Viewport_SetBackgroundColour(v.CPtr, C.float(r), C.float(g), C.float(b), C.float(a))
}

func (v *Viewport) GetActualWidth() float32 {
	result := C.Viewport_GetActualWidth(v.CPtr)
	return float32(result)
}

func (v *Viewport) GetActualHeight() float32 {
	result := C.Viewport_GetActualHeight(v.CPtr)
	return float32(result)
}

type TextureManager struct {
	CPtr C.TextureManagerPtr
}

// todo: once in own file/namespace, just have GetInstance()
func GetTextureManager() TextureManager {
	var result TextureManager
	result.CPtr = C.TextureManager_GetInstance()
	return result
}

func (t *TextureManager) SetDefaultNumMipmaps(num int) {
	C.TextureManager_SetDefaultNumMipmaps(t.CPtr, C.int(num))
}

type ResourceGroupManager struct {
	CPtr C.ResourceGroupManagerPtr
}

func GetResourceGroupManager() ResourceGroupManager {
	var result ResourceGroupManager
	result.CPtr = C.ResourceGroupManager_GetInstance()
	return result
}

func (r *ResourceGroupManager) AddResourceLocation(location, locationType string) {
	C.ResourceGroupManager_AddResourceLocation(r.CPtr, C.CString(location), C.CString(locationType))
}

func (r *ResourceGroupManager) InitialiseAllResourceGroups() {
	C.ResourceGroupManager_InitialiseAllResourceGroups(r.CPtr)
}

type Entity struct {
	CPtr C.EntityPtr
}

type SceneNode struct {
	CPtr C.SceneNodePtr
}

func (n *SceneNode) CreateChildSceneNode() SceneNode {
	var result SceneNode
	result.CPtr = C.SceneNode_CreateChildSceneNode(n.CPtr)
	return result
}

func (n *SceneNode) AttachObject(e Entity) {
	C.SceneNode_AttachObject(n.CPtr, e.CPtr)
}

type Light struct {
	CPtr C.LightPtr
}

func (l *Light) SetPosition(x, y, z float32) {
	C.Light_SetPosition(l.CPtr, C.float(x), C.float(y), C.float(z))
}

func MessagePump() {
	C.WindowEventUtilities_MessagePump()
}


// stupid helper for C booleans
func gobool(b C.int) bool {
	if b == C.FALSE {
		return false
	}
	
	return true
}

func cbool(b bool) C.int {
	if b {
		return C.int(1)
	}

	return C.int(0)
}