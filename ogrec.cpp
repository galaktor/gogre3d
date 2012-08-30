// wrapper header:
# include "ogrec.h"
// ogre stuff:
# include "ogreinclude/OgreRoot.h"
# include "ogreinclude/OgreRenderWindow.h"
# include "ogreinclude/OgreResourceGroupManager.h"
# include "ogreinclude/OgreWindowEventUtilities.h"
# include <string>

using namespace std;
using namespace Ogre;

RootPtr New_Root(char* pluginsCfg, char* ogreCfg, char* logFile) {
  // use explicit conversion to cpp-string - necessary?
  //    return new Root(string(pluginsCfg), string(ogreCfg), string(logFile));
  return new Root(pluginsCfg, ogreCfg, logFile);
}

void Delete_Root(RootPtr r) {
  delete (Root*)r;
}

int Root_ShowConfigDialog(RootPtr r) {
  return (int) ((Root*)r)->showConfigDialog();
}

RenderWindowPtr Root_Initialise(RootPtr r, int createWindow, char* windowTitle) {
  return (RenderWindowPtr) ((Root*)r)->initialise((bool)createWindow, windowTitle);
}

SceneManagerPtr Root_CreateSceneManager(RootPtr r) {
  return (SceneManagerPtr) ((Root*)r)->createSceneManager(Ogre::ST_GENERIC);
}

int Root_RenderOneFrame(RootPtr r) {
  return (int) ((Root*)r)->renderOneFrame();
}

ViewportPtr RenderWindow_AddViewport(RenderWindowPtr rw, CameraPtr c) {
  return (ViewportPtr) ((RenderWindow*)rw)->addViewport((Camera*)c);
}

int RenderWindow_IsClosed(RenderWindowPtr rw) {
  return (int) ((RenderWindow*)rw)->isClosed();
}

CameraPtr SceneManager_CreateCamera(SceneManagerPtr sm, char* name) {
  return (CameraPtr) (((SceneManager*)sm)->createCamera(name));
}

EntityPtr SceneManager_CreateEntity(SceneManagerPtr sm, char* name, char* resource) {
  return (EntityPtr) ((SceneManager*)sm)->createEntity(name, resource);
}

LightPtr SceneManager_CreateLight(SceneManagerPtr sm, char* name) {
  return (LightPtr) ((SceneManager*)sm)->createLight(name);
}

SceneNodePtr SceneManager_GetRootSceneNode(SceneManagerPtr sm) {
  return (SceneNodePtr) ((SceneManager*)sm)->getRootSceneNode();
}

void SceneManager_SetAmbientLight(SceneManagerPtr sm, float r, float g, float b, float a) {
  ((SceneManager*)sm)->setAmbientLight(Ogre::ColourValue(r, g, b, a));
}

void Camera_SetPosition(CameraPtr c, float x, float y, float z) {
  ((Camera*)c)->setPosition(Ogre::Vector3(x, y, z));
}

void Camera_LookAt(CameraPtr c, float x, float y, float z) {
  ((Camera*)c)->lookAt(Ogre::Vector3(x, y, z));
}

void Camera_SetNearClipDistance(CameraPtr c, float distance) {
  ((Camera*)c)->setNearClipDistance(distance);
}

void Camera_SetAspectRatio(CameraPtr c, float ratio) {
  ((Camera*)c)->setAspectRatio(Ogre::Real(ratio)); // Ogre::Real necessary?
}

void Viewport_SetBackgroundColour(ViewportPtr v, float r, float g, float b, float a) {
  ((Viewport*)v)->setBackgroundColour(Ogre::ColourValue(r, g, b, a));
}

float Viewport_GetActualWidth(ViewportPtr v) {
  return ((Viewport*)v)->getActualWidth();
}

float Viewport_GetActualHeight(ViewportPtr v) {
  return ((Viewport*)v)->getActualHeight();
}

TextureManagerPtr TextureManager_GetInstance() {
  return (TextureManagerPtr) &Ogre::TextureManager::getSingleton();
}

void TextureManager_SetDefaultNumMipmaps(TextureManagerPtr tm, int num) {
  ((TextureManager*)tm)->setDefaultNumMipmaps(num);
}

ResourceGroupManagerPtr ResourceGroupManager_GetInstance() {
  return (ResourceGroupManagerPtr) &ResourceGroupManager::getSingleton();
}

void ResourceGroupManager_AddResourceLocation(ResourceGroupManagerPtr rgm, char* location, char* locationType) {
  ((ResourceGroupManager*)rgm)->addResourceLocation(location, locationType);
}

void ResourceGroupManager_InitialiseAllResourceGroups(ResourceGroupManagerPtr rgm) {
  ((ResourceGroupManager*)rgm)->initialiseAllResourceGroups();
}

SceneNodePtr SceneNode_CreateChildSceneNode(SceneNodePtr s) {
  return (SceneNodePtr) ((SceneNode*)s)->createChildSceneNode();
}

void SceneNode_AttachObject(SceneNodePtr s, EntityPtr other) {
  ((SceneNode*)s)->attachObject((Ogre::MovableObject*)other);
}

void Light_SetPosition(LightPtr l, float x, float y, float z) {
  ((Light*)l)->setPosition(x, y, z);
}

void WindowEventUtilities_MessagePump() {
  Ogre::WindowEventUtilities::messagePump();
}
