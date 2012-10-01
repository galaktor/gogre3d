#pragma once

#include "ogre_interface.h"

// No create/destroy methods for these, as this is the job of the SceneManager.
// SceneQuery::setQueryMask(uint32 mask)
DLL void scenequery_set_query_mask(SceneQueryHandle handle, uint32 mask);
//uint32 SceneQuery::getQueryMask(void) const
DLL uint32 scenequery_get_query_mask(SceneQueryHandle handle);
//void SceneQuery::setWorldFragmentType(enum WorldFragmentType wft);
DLL void scenequery_set_world_fragment_type(SceneQueryHandle handle, world_fragment_type wft);
//WorldFragmentType SceneQuery::getWorldFragmentType(void) const;
DLL world_fragment_type scenequery_get_world_fragment_type(SceneQueryHandle handle);

DLL void rayscenequery_set_ray(RaySceneQueryHandle handle, RayHandle ray_handle);
DLL RayHandle rayscenequery_get_ray(RaySceneQueryHandle handle);

//void setSortByDistance(bool sort, ushort maxresults = 0);
DLL void rayscenequery_set_sort_by_distance(RaySceneQueryHandle handle, int on, unsigned short maxresults);
//bool getSortByDistance(void) const;
DLL int rayscenequery_get_sort_by_distance(RaySceneQueryHandle handle);
//ushort getMaxResults(void) const;
DLL unsigned short rayscenequery_get_max_results(RaySceneQueryHandle handle);

// typedef vector<RaySceneQueryResultEntry>::type RaySceneQueryResult;
DLL size_t rayscenequeryresult_count(RaySceneQueryResultHandle handle);
DLL void rayscenequeryresult_at(RaySceneQueryResultHandle handle, int index, rayscenequery_result_entry* result);

// SceneQueryListener
DLL SceneQueryListenerHandle create_scenequerylistener(SceneQueryFragmentResult fragment_callback, SceneQueryObjectResult object_callback, void* userdata);
DLL void destroy_scenequerylistener(SceneQueryListenerHandle handle);

DLL RaySceneQueryListenerHandle create_rayscenequerylistener(RaySceneQueryFragmentResult fragment_callback, RaySceneQueryObjectResult object_callback, void* userdata);
DLL void destroy_rayscenequerylistener(RaySceneQueryListenerHandle handle);

DLL size_t scenequeryresult_movables_count(SceneQueryResultHandle handle);
DLL MovableObjectHandle scenequeryresult_movables_at(SceneQueryResultHandle handle, int index);

DLL size_t scenequeryresult_worldfragments_count(SceneQueryResultHandle handle, int index);
DLL void scenequeryresult_worldfragments_at(SceneQueryResultHandle handle, int index, world_fragment* result);
