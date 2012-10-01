#pragma once

#include "ogre_interface.h"

DLL TextureManagerHandle texturemanager_singleton();

DLL void texturemanager_set_default_num_mipmaps(TextureManagerHandle tm_hande, int number);
