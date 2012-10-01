#pragma once

#include "ogre_interface.h"

//~ResourceManager();
DLL void destroy_resourcemanager(ResourceManagerHandle handle);
//ResourcePtr create(const String& name, const String& group, bool isManual = false, ManualResourceLoader* loader = 0, const NameValuePairList* createParams = 0)
DLL ResourcePtrHandle resourcemanager_create(ResourceManagerHandle handle, const char* name, const char* group, int is_manual, ManualResourceLoaderHandle loader, const NameValuePairListHandle create_params);
//typedef std::pair<ResourcePtr, bool> ResourceCreateOrRetrieveResult
//TODO: ResourceCreateOrRetrieveResult createOrRetrieve(const String& name, const String& group, bool isManual = false, ManualResourceLoader* loader = 0, const NameValuePairList* createParams = 0)
//void setMemoryBudget( size_t bytes)
DLL void resourcemanager_set_memory_budget(ResourceManagerHandle handle, size_t bytes);
//size_t getMemoryBudget(void) const
DLL size_t resourcemanager_get_memory_budget(const ResourceManagerHandle handle);
//size_t getMemoryUsage(void) const
DLL size_t resourcemanager_get_memory_usage(const ResourceManagerHandle handle);
//void unload(const String& name)
DLL void resourcemanager_unload_by_name(ResourceManagerHandle handle, const char* name);
//void unload(ResourceHandle handle)
DLL void resourcemanager_unload_by_handle(ResourceManagerHandle handle, ResourceHandle res_handle);
//void unloadAll(bool reloadableOnly = true)
DLL void resourcemanager_unload_all(ResourceManagerHandle handle, int reloadable_only);
//void reloadAll(bool reloadableOnly = true)
DLL void resourcemanager_reload_all(ResourceManagerHandle handle, int reloadable_only);
//void unloadUnreferencedResources(bool reloadableOnly = true)
DLL void resourcemanager_unload_unreferenced_resources(ResourceManagerHandle handle, int reloadable_only);
//void reloadUnreferencedResources(bool reloadableOnly = true)
DLL void resourcemanager_reload_unreferenced_resources(ResourceManagerHandle handle, int reloadable_only);
//void remove(ResourcePtr& r)
DLL void resourcemanager_remove_by_ptr(ResourceManagerHandle handle, ResourcePtrHandle resource_ptr);
//void remove(const String& name)
DLL void resourcemanager_remove_by_name(ResourceManagerHandle handle, const char* name);
//void remove(ResourceHandle handle)
DLL void resourcemanager_remove_by_handle(ResourceManagerHandle handle, ResourceHandle res_handle);
//void removeAll(void)
DLL void resourcemanager_remove_all(ResourceManagerHandle handle);
//void removeUnreferencedResources(bool reloadableOnly = true)
DLL void resourcemanager_remove_unreferenced_resources(ResourceManagerHandle handle, int reloadable_only);
//ResourcePtr getByName(const String& name, const String& groupName = ResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME)
DLL ResourcePtrHandle resourcemanager_get_by_name(ResourceManagerHandle handle, const char* name, const char* group_name);
//ResourcePtr getByHandle(ResourceHandle handle)
DLL ResourcePtrHandle resourcemanager_get_by_handle(ResourceManagerHandle handle, ResourceHandle res_handle);
//bool resourceExists(const String& name)
DLL int resourcemanager_exists_by_name(ResourceManagerHandle handle, const char* name);
//bool resourceExists(ResourceHandle handle)
DLL int resourcemanager_exists_by_handle(ResourceManagerHandle handle, ResourceHandle res_handle);
//void _notifyResourceTouched(Resource* res)
DLL void resourcemanager__notify_resource_touched(ResourceManagerHandle handle, coiResourceHandle res);
//void _notifyResourceLoaded(Resource* res)
DLL void resourcemanager__notify_resource_loaded(ResourceManagerHandle handle, coiResourceHandle res);
//void _notifyResourceUnloaded(Resource* res)
DLL void resourcemanager__notify_resource_unloaded(ResourceManagerHandle handle, coiResourceHandle res);
//ResourcePtr prepare(const String& name, const String& group, bool isManual = false, ManualResourceLoader* loader = 0, const NameValuePairList* loadParams = 0, bool backgroundThread = false)
DLL ResourcePtrHandle resourcemanager_prepare(ResourceManagerHandle handle, const char* name, const char* group, int is_manual, ManualResourceLoaderHandle loader, NameValuePairListHandle load_params, int background_thread);
//ResourcePtr load(const String& name, const String& group, bool isManual = false, ManualResourceLoader* loader = 0, const NameValuePairList* loadParams = 0, bool backgroundThread = false)
DLL ResourcePtrHandle resourcemanager_load(ResourceManagerHandle handle, const char* name, const char* group, int is_manual, ManualResourceLoaderHandle loader, NameValuePairListHandle load_params, int background_thread);
//TODO:const StringVector& getScriptPatterns(void) const
//TODO: void parseScript(DataStreamPtr& stream, const String& groupName)
//Real getLoadingOrder(void) const
DLL coiReal resourcemanager_get_loading_order(const ResourceManagerHandle handle);
//const String& getResourceType(void) const
DLL const char* resourcemanager_get_resource_type(const ResourceManagerHandle handle);
//void setVerbose(bool v)
DLL void resourcemanager_set_verbose(ResourceManagerHandle handle, int v);
//bool getVerbose(void)
DLL int resourcemanager_get_verbose(ResourceManagerHandle handle);
