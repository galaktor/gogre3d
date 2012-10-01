#pragma once

#include "ogre_interface.h"

//TODO: VertexData(HardwareBufferManagerBase* mgr = 0);
//TODO: VertexData(VertexDeclaration* dcl, VertexBufferBinding* bind);
//~VertexData();
DLL void destroy_vertexdata(VertexDataHandle handle);
//(see OgreHardwareVertexBuffer.h): VertexDeclaration* vertexDeclaration;
//(see OgreHardwareVertexBuffer.h) VertexBufferBinding* vertexBufferBinding;
//size_t vertexStart;
DLL size_t vertexdata_vertex_start(VertexDataHandle handle); // getter
//size_t vertexCount;
DLL size_t vertexdata_vertex_count(VertexDataHandle handle); // getter
//typedef vector<HardwareAnimationData>::type HardwareAnimationDataList;
//HardwareAnimationDataList hwAnimationDataList;
//size_t hwAnimDataItemsUsed;
DLL size_t vertexdata_hw_anim_data_items_used(VertexDataHandle handle);
//VertexData* clone(bool copyData = true, HardwareBufferManagerBase* mgr = 0) const;
DLL VertexDataHandle vertexdata_clone(const VertexDataHandle handle, int copy_data);
//void prepareForShadowVolume(void);
DLL void vertexdata_prepare_for_shadow_volume(VertexDataHandle handle);
//HardwareVertexBufferSharedPtr hardwareShadowVolWBuffer;
//TODO: void reorganiseBuffers(VertexDeclaration* newDeclaration, const BufferUsageList& bufferUsage, HardwareBufferManagerBase* mgr = 0);
//TODO: void reorganiseBuffers(VertexDeclaration* newDeclaration, HardwareBufferManagerBase* mgr = 0);
//void closeGapsInBindings(void);
DLL void vertexdata_close_gaps_in_bindings(VertexDataHandle handle);
//void removeUnusedBuffers(void);
DLL void vertexdata_remove_unused_buffers(VertexDataHandle handle);
//TODO:void convertPackedColour(VertexElementType srcType, VertexElementType destType);
//ushort allocateHardwareAnimationElements(ushort count, bool animateNormals);
DLL unsigned short vertexdata_allocate_hardware_animation_elements(VertexDataHandle handle, unsigned short count, int animate_normals);

//IndexData();
DLL IndexDataHandle create_indexdata();
//~IndexData();
DLL void destroy_indexdata(IndexDataHandle handle);
//HardwareIndexBufferSharedPtr indexBuffer;
//size_t indexStart;
DLL size_t indexdata_index_start(IndexDataHandle handle);
//size_t indexCount;
DLL size_t indexdata_index_count(IndexDataHandle handle);
//IndexData* clone(bool copyData = true, HardwareBufferManagerBase* mgr = 0) const;
DLL IndexDataHandle indexdata_clone(const IndexDataHandle handle, int copy_data);
//void optimiseVertexCacheTriList(void);
DLL void indexdata_optimise_vertex_cache_tri_list(IndexDataHandle handle);
