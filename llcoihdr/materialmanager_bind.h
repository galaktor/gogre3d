#pragma once

#include "ogre_interface.h"

//static String DEFAULT_SCHEME_NAME
DLL const char* materialmanager_get_default_scheme_name();
//MaterialManager()
DLL MaterialManagerHandle create_materialmanager();
//~MaterialManager()
DLL void destroy_materialmanager(MaterialManagerHandle handle);
//void initialise()
DLL void materialmanager_initialise(MaterialManagerHandle handle);
//TODO: void parseScript(DataStreamPtr& stream, const String& groupName)
//void setDefaultTextureFiltering(TextureFilterOptions fo)
DLL void materialmanager_set_default_texture_filtering(MaterialManagerHandle handle, texture_filter_options fo);
//void setDefaultTextureFiltering(FilterType ftype, FilterOptions opts)
DLL void materialmanager_set_default_texture_filtering_with_type(MaterialManagerHandle handle, filter_type ftype, filter_options opts);
//void setDefaultTextureFiltering(FilterOptions minFilter, FilterOptions magFilter, FilterOptions mipFilter)
DLL void materialmanager_set_default_texture_filtering_min(MaterialManagerHandle handle, filter_options min_filter, filter_options mag_filter, filter_options mip_filter);
//FilterOptions getDefaultTextureFiltering(FilterType ftype) const
DLL filter_options materialmanager_get_default_texture_filtering(const MaterialManagerHandle handle, filter_type ftype);
//void setDefaultAnisotropy(unsigned int maxAniso)
DLL void materialmanager_set_default_anisotropy(MaterialManagerHandle handle, unsigned int max_aniso);
//unsigned int getDefaultAnisotropy() const
DLL unsigned int materialmanager_get_default_anisotropy(const MaterialManagerHandle handle);
//MaterialPtr getDefaultSettings() const
DLL MaterialPtrHandle materialmanager_get_default_settings(const MaterialManagerHandle handle);
//unsigned short _getSchemeIndex(const String& name)
DLL unsigned short materialmanager__get_scheme_index(MaterialManagerHandle handle, const char* name);
//const String& _getSchemeName(unsigned short index)
DLL const char* materialmanager__get_scheme_name(MaterialManagerHandle handle, unsigned short index);
//unsigned short _getActiveSchemeIndex() const
DLL unsigned short materialmanager__get_active_scheme_index(const MaterialManagerHandle handle);
//const String& getActiveScheme() const
DLL const char* materialmanager_get_active_scheme(const MaterialManagerHandle handle);
//void setActiveScheme(const String& schemeName)
DLL void materialmanager_set_active_scheme(MaterialManagerHandle handle, const char* scheme_name);
//TODO: void addListener(Listener* l, const Ogre::String& schemeName = StringUtil::BLANK)
//TODO: void removeListener(Listener* l, const Ogre::String& schemeName = StringUtil::BLANK)
//TODO: Technique* _arbitrateMissingTechniqueForActiveScheme(    Material* mat, unsigned short lodIndex, const Renderable* rend)
//static MaterialManager& getSingleton()
DLL MaterialManagerHandle materialmanager_get_singleton();
//static MaterialManager* getSingletonPtr()
DLL MaterialManagerHandle materialmanager_get_singleton_ptr();
