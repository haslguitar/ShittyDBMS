#include "StorageHandlerType.h"
#include "StorageHandler.h"
#include "DBTable.h"
#include <string>

DBTable StorageHandlerType::query(std::string query) {
	DBTable blankTable;
	return blankTable;
}

bool StorageHandlerType::setupStorageHandler(...) { 
	return false;
}

StorageHandlerType::~StorageHandlerType() {};

