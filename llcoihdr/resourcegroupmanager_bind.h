#pragma once

#include "ogre_interface.h"

DLL void setup_resources(const char* resources_cfg);

DLL void add_resource_location(const char* location, const char* type, const char* group);

DLL void initialise_all_resourcegroups();
