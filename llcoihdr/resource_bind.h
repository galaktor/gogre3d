#pragma once

#include "ogre_interface.h"

DLL ResourceListenerHandle create_resourcelistener(loadingCompleteCB loading_cb, preparingCompleteCB preparing_cb, unloadingCompleteCB unloading_cb, void* userdata);
DLL void destroy_resourcelistener(ResourceListenerHandle handle);

DLL void destroy_resource(coiResourceHandle handle);
//void prepare(bool backgroundThread = false)
DLL void resource_prepare(coiResourceHandle handle, int background_thread);
//void load(bool backgroundThread = false)
DLL void resource_load(coiResourceHandle handle, int background_thread);
//void reload()
DLL void resource_reload(coiResourceHandle handle);
//bool isReloadable(void) const
DLL int resource_is_reloadable(const coiResourceHandle handle);
//bool isManuallyLoaded(void) const
DLL int resource_is_manually_loaded(const coiResourceHandle handle);
//void unload(void)
DLL void resource_unload(coiResourceHandle handle);
//size_t getSize(void) const
DLL size_t resource_get_size(const coiResourceHandle handle);
//void touch(void)
DLL void resource_touch(coiResourceHandle handle);
//const String& getName(void) const 
DLL const char* resource_get_name(const coiResourceHandle handle);
//ResourceHandle getHandle(void) const
DLL ResourceHandle resource_get_handle(const coiResourceHandle handle);
//bool isPrepared(void) const 
DLL int resource_is_prepared(const coiResourceHandle handle);
//bool isLoaded(void) const 
DLL int resource_is_loaded(const coiResourceHandle handle);
//bool isLoading() const
DLL int resource_is_loading(const coiResourceHandle handle);
//LoadingState getLoadingState() const
DLL loading_state resource_get_loading_state(const coiResourceHandle handle);
//bool isBackgroundLoaded(void) const
DLL int resource_is_background_loaded(const coiResourceHandle handle);
//void setBackgroundLoaded(bool bl)
DLL void resource_set_background_loaded(coiResourceHandle handle, int bl);
//void escalateLoading()
DLL void resource_escalate_loading(coiResourceHandle handle);
//void addListener(Listener* lis)
DLL void resource_add_listener(coiResourceHandle handle, ResourceListenerHandle listener);
//void removeListener(Listener* lis)
DLL void resource_remove_listener(coiResourceHandle handle, ResourceListenerHandle listener);
//const String& getGroup(void) const
DLL const char* resource_get_group(const coiResourceHandle handle);
//void changeGroupOwnership(const String& newGroup)
DLL void  resource_change_group_ownership(coiResourceHandle handle, const char* new_group);
//ResourceManager* getCreator(void)
DLL ResourceManagerHandle resource_get_creator(coiResourceHandle handle);
//const String& getOrigin(void) const
DLL const char* resource_get_origin(const coiResourceHandle handle);
//void _notifyOrigin(const String& origin)
DLL void resource__notify_origin(coiResourceHandle handle, const char* origin);
//size_t getStateCount() const
DLL size_t resource_get_state_count(const coiResourceHandle handle);
//void _dirtyState()
DLL void resource__dirty_state(coiResourceHandle handle);
//void _fireLoadingComplete(bool wasBackgroundLoaded)
DLL void resource__fire_loading_complete(coiResourceHandle handle, int was_background_loaded);
//void _firePreparingComplete(bool wasBackgroundLoaded)
DLL void resource__fire_preparing_complete(coiResourceHandle handle, int was_background_loaded);
//void _fireUnloadingComplete(void)
DLL void resource__fire_unloading_complete(coiResourceHandle handle);
//typedef SharedPtr<Resource> ResourcePtr


//Ogre::ManualResourceLoader
//~ManualResourceLoader()
DLL void destroy_manualresourceloader(ManualResourceLoaderHandle handle);
//void prepareResource(Resource* resource)
DLL void manualresourceloader_prepare_resource(ManualResourceLoaderHandle handle, coiResourceHandle resource);
//void loadResource(Resource* resource)
DLL void manualresourceloader_load_resource(ManualResourceLoaderHandle handle, coiResourceHandle resource);
