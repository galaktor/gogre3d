/*
Ogre3d bindings for Go via a slim C-Wrapper. By no means complete, will grow with my project (or by other contributions).
What /is/ there was tested on Linux x64 with Ogre version 1.8.0
TODO: ditch custom C-Wrapper and use community C-bindings to Ogre instead
*/

package gogre3d

/* 
 #cgo LDFLAGS: -L./ogrelib -lllcoi
 #include "ogre_interface.h"
 #include "ois_interface.h"
*/
import "C"

type Root struct {
	CPtr C.RootHandle
}

func NewRoot(pluginsCfg, ogreCfg, logfile string) Root {
	var result Root
	result.CPtr = C.create_root(C.CString(pluginsCfg), C.CString(ogreCfg), C.CString(logfile))

	return result
}

func (r *Root) ReleaseEngine() {
	C.release_engine()
	r.CPtr = nil
}

type RenderSystem struct {
	CPtr C.RenderSystemHandle
}

func (r *Root) GetRenderSystemByName(name string) RenderSystem {
	var result RenderSystem
	result.CPtr = C.get_render_system_by_name(C.CString(name))
	
	return result
}

func (r *RenderSystem) SetConfigOption(key, value string) {
	C.render_system_set_config_option(r.CPtr, C.CString(key), C.CString(value))
}

func (r *Root) SetRenderSystem(s RenderSystem) {
	C.set_render_system(s.CPtr)
}

func (r *Root) ShowConfigDialog() bool {
	result := C.show_config_dialog()
	return gobool(result)
}

func (r *Root) Initialise(createWindow bool, windowTitle string) RenderWindow {
	var result RenderWindow
	result.CPtr = C.root_initialise(cbool(createWindow), C.CString(windowTitle))
	
	return result
}

func (r *Root) CreateSceneManager(typename, instancename string) SceneManager {
	var result SceneManager
	result.CPtr = C.create_scene_manager(C.CString(typename), C.CString(instancename))
	
	return result
}

func (r *Root) RenderOneFrame(timestep float32) bool {
	return gobool(C.render_one_frame_ex(C.float(timestep)))
}

func (r *Root) LoadPlugin(name string) {
	C.load_ogre_plugin(C.CString(name))
}

type RenderWindow struct {
	CPtr C.RenderWindowHandle
}

func (rw *RenderWindow) AddViewport(c Camera) Viewport {
	var result Viewport
	result.CPtr = C.add_viewport(c.CPtr)

	return result
}

func (rw *RenderWindow) IsClosed() bool {
	result := C.render_window_closed()
	return gobool(result)
}

type SceneManager struct {
	CPtr C.SceneManagerHandle
}

func (sm *SceneManager) CreateCamera(name string) Camera {
	var result Camera
	result.CPtr = C.create_camera(C.CString(name))
	
	return result
}

func (sm *SceneManager) CreateEntity(name, meshfile string) Entity {
	var result Entity
	result.CPtr = C.create_entity(C.CString(name), C.CString(meshfile))
	
	return result
}

func (sm *SceneManager) CreateLight(name string) Light {
	var result Light
	result.CPtr = C.create_light(C.CString(name))
	
	return result
}

/*
func (sm *SceneManager) GetRootSceneNode() SceneNode {
	var result SceneNode
	result.CPtr = C.SceneManager_GetRootSceneNode(sm.CPtr)
	return result
 }
*/

func (sm *SceneManager) SetAmbientLight(r, g, b, a float32) {
	C.set_ambient_light_rgba(C.float(r), C.float(g), C.float(b), C.float(a))
}

type Camera struct {
	CPtr C.CameraHandle
}

func (c *Camera) SetPosition(x, y, z float32) {
	C.camera_set_position(c.CPtr, C.float(x), C.float(y), C.float(z))
}

func (c *Camera) LookAt(x, y, z float32) {
	C.camera_lookat(c.CPtr, C.float(x), C.float(y), C.float(z))
}

func (c *Camera) SetNearClipDistance(distance float32) {
	C.camera_set_near_clip_distance(c.CPtr, C.float(distance))
}

func (c *Camera) SetAspectRatio(width, height float32) {
	C.camera_set_aspect_ratio(c.CPtr, C.float(width), C.float(height))
}

type Viewport struct {
	CPtr C.ViewportHandle
}

func (v *Viewport) SetBackgroundColour(r, g, b float32) {
	C.viewport_set_background_colour(v.CPtr, C.float(r), C.float(g), C.float(b))
}

func (v *Viewport) GetWidth() float32 {
	result := C.viewport_get_width(v.CPtr)
	return float32(result)
}

func (v *Viewport) GetHeight() float32 {
	result := C.viewport_get_height(v.CPtr)
	return float32(result)
}

func SetDefaultNumMipmaps(num int) {
	C.set_default_num_mipmaps(C.int(num))
}

/*
type TextureManager struct {
	CPtr TextureManagerPtr
}


// todo: once in own file/namespace, just have GetInstance()
func GetTextureManager() TextureManager {
	var result TextureManager
	result.CPtr = C.TextureManager_GetInstance()
	return result
}




type ResourceGroupManager struct {
	CPtr ResourceGroupManagerPtr
}

func GetResourceGroupManager() ResourceGroupManager {
	var result ResourceGroupManager
	result.CPtr = C.ResourceGroupManager_GetInstance()
	return result
}
*/

func AddResourceLocation(location, locationType, group string) {
	C.add_resource_location(C.CString(location), C.CString(locationType), C.CString(group))
}

func InitialiseAllResourceGroups() {
	C.initialise_all_resourcegroups()
}

type Entity struct {
	CPtr C.EntityHandle
}

type SceneNode struct {
	CPtr C.SceneNodeHandle
}

func CreateChildSceneNode(name string) SceneNode {
	var result SceneNode
	result.CPtr = C.create_child_scenenode(C.CString(name))

	return result
}

func (n *SceneNode) Attach(e Entity) {
	C.attach_entity_to_scenenode(e.CPtr, n.CPtr)
}

func (n *SceneNode) Detach(e Entity) {
	C.scenenode_detach_entity(n.CPtr, e.CPtr)
}

func (n *SceneNode) SetPosition(x, y, z float32) {
	C.scenenode_set_position(n.CPtr, C.float(x), C.float(y), C.float(z))
}

type Light struct {
	CPtr C.LightHandle
}

func (l *Light) SetPosition(x, y, z float32) {
	C.light_set_position(l.CPtr, C.float(x), C.float(y), C.float(z))
}

func MessagePump() {
	C.pump_messages()
}

// stupid helper for C booleans
func gobool(b C.int) bool {
	if b == C.int(0) {
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