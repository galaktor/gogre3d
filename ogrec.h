#ifdef __cplusplus
extern "C" {
#endif

#define TRUE  1
#define FALSE 0

  // naked pointers for now
  typedef void* RootPtr;
  typedef void* RenderSystemPtr;
  typedef void* RenderWindowPtr;
  typedef void* SceneManagerPtr;
  typedef void* TextureManagerPtr;
  typedef void* CameraPtr;
  typedef void* ViewportPtr;
  typedef void* ResourceGroupManagerPtr;
  typedef void* EntityPtr;
  typedef void* SceneNodePtr;
  typedef void* LightPtr;

  RootPtr New_Root(char* pluginsCfg, char* ogreCfg, char* logfile);
  void Delete_Root(RootPtr r);
  void Root_SetRenderSystem(RootPtr r, RenderSystemPtr s);
  RenderSystemPtr Root_GetRenderSystemByName(RootPtr r, char* name);
  void RenderSystem_SetConfigOption(RenderSystemPtr r, char* key, char* value);
  int Root_ShowConfigDialog(RootPtr r);
  RenderWindowPtr Root_Initialise(RootPtr r, int createWindow, char* windowTitle);
  void Root_LoadPlugin(RootPtr r, char* name);
  SceneManagerPtr Root_CreateSceneManager(RootPtr r);
  int Root_RenderOneFrame(RootPtr r);
  
  ViewportPtr RenderWindow_AddViewport(RenderWindowPtr rw, CameraPtr c);
  int RenderWindow_IsClosed(RenderWindowPtr rw);

  CameraPtr SceneManager_CreateCamera(SceneManagerPtr sm, char* name);
  EntityPtr SceneManager_CreateEntity(SceneManagerPtr sm, char* name, char* resource);
  LightPtr SceneManager_CreateLight(SceneManagerPtr sm, char* name);
  SceneNodePtr SceneManager_GetRootSceneNode(SceneManagerPtr sm);
  void SceneManager_SetAmbientLight(SceneManagerPtr sm, float r, float g, float b, float a);

  void Camera_SetPosition(CameraPtr c, float x, float y, float z);
  void Camera_LookAt(CameraPtr c, float x, float y, float z);
  void Camera_SetNearClipDistance(CameraPtr c, float distance);
  void Camera_SetAspectRatio(CameraPtr c, float ratio);

  void Viewport_SetBackgroundColour(ViewportPtr v, float r, float g, float b, float a);

  float Viewport_GetActualWidth(ViewportPtr v);
  float Viewport_GetActualHeight(ViewportPtr v);

  TextureManagerPtr TextureManager_GetInstance();
  void TextureManager_SetDefaultNumMipmaps(TextureManagerPtr tm, int num);

  ResourceGroupManagerPtr ResourceGroupManager_GetInstance();
  void ResourceGroupManager_AddResourceLocation(ResourceGroupManagerPtr rgm, char* location, char* locationType);
  void ResourceGroupManager_InitialiseAllResourceGroups(ResourceGroupManagerPtr rgm);

  SceneNodePtr SceneNode_CreateChildSceneNode(SceneNodePtr s);
  void SceneNode_AttachObject(SceneNodePtr s, EntityPtr other);
  void SceneNode_DetachObject(SceneNodePtr s, EntityPtr other);
  void SceneNode_SetPosition(SceneNodePtr s, float x, float y, float z);

  void Light_SetPosition(LightPtr l, float x, float y, float z);

  void WindowEventUtilities_MessagePump();


#ifdef __cplusplus
}
#endif
