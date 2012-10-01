#pragma once

#include "ogre_interface.h"

// Ogre::Timer
DLL int timer_set_option(TimerHandle handle, const char* key, void* value);
DLL unsigned long timer_get_milliseconds(TimerHandle handle);
DLL unsigned long timer_get_microseconds(TimerHandle handle);
DLL unsigned long timer_get_milliseconds_cpu(TimerHandle handle);
DLL unsigned long timer_get_microseconds_cpu(TimerHandle handle);
DLL void timer_reset(TimerHandle handle);
