#pragma once

#include "ogre_interface.h"

DLL RenderOperationHandle create_renderoperation();
DLL void destroy_renderoperation(RenderOperationHandle handle);

//VertexData *vertexData;
DLL VertexDataHandle renderoperation_get_vertex_data(RenderOperationHandle handle);
DLL void renderoperation_set_vertex_data(RenderOperationHandle handle, VertexDataHandle vertex_data);
//OperationType operationType;
DLL operation_type renderoperation_get_operation_type(RenderOperationHandle handle);
DLL void renderoperation_set_operation_type(RenderOperationHandle handle, operation_type op_type);
//bool useIndexes;
DLL int renderoperation_get_use_indexes(RenderOperationHandle handle);
DLL void renderoperation_set_use_indexes(RenderOperationHandle, bool use_indexes);
//IndexData *indexData;
DLL IndexDataHandle renderoperation_get_index_data(RenderOperationHandle handle);
DLL void renderoperation_set_index_data(RenderOperationHandle handle, IndexDataHandle index_data);
//TODO: const Renderable* srcRenderable;
//size_t numberOfInstances;
DLL size_t renderoperation_get_number_of_instances(RenderOperationHandle handle);
DLL void renderoperation_set_number_of_instances(RenderOperationHandle handle, size_t num);
//bool useGlobalInstancingVertexBufferIsAvailable;
DLL int renderoperation_get_use_global_instancing_vertex_buffer_is_available(RenderOperationHandle handle);
DLL void renderoperation_set_use_global_instancing_vertex_buffer_is_available(RenderOperationHandle handle, int use);
