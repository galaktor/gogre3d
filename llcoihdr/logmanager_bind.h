#pragma once

#include "ogre_interface.h"

// LogManager
DLL LogManagerHandle create_log_manager();

// LogManager::getSingletonPtr
DLL LogManagerHandle get_log_manager();

//LogManager::getLog
DLL LogHandle logmanager_get_log(const char* name);

//LogManager::getDefaultLog
DLL LogHandle logmanager_get_default_log();

//LogManager::setDefaultLog
DLL LogHandle logmanager_set_default_log(LogHandle log_handle);

//LogManager::createLog
DLL LogHandle logmanager_create_log(const char* name, int default_log, int debugger_output, int suppress_file_output);

// n.b., Allows for finer grained control over the log messages at the cost of
// having to supply all these variables. If you don't need this control,
// use log_message above.
//LogManager::logMessage
DLL void logmanager_log_message(const char* message, log_message_level lml, int maskDebug, const char* log_name, int skip_message);

//LogManager::setLogDetail
DLL void logmanager_set_log_detail(logging_level lvl);

//LogManager::destroyLog
DLL void logmanager_destroy_log(const char* name);

//LogManager::destroyLog
DLL void logmanager_destroy_log_by_handle(LogHandle log_handle);
