#pragma once

#include "ogre_interface.h"

DLL void set_default_num_mipmaps(int number);

// NameValuePairList 
DLL NameValuePairListHandle create_name_value_pair_list();
DLL void add_pair(NameValuePairListHandle params, const char* name, const char* value);
DLL void destroy_name_value_pair_list(NameValuePairListHandle params);
DLL void log_message(const char* message);
