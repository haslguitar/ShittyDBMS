#ifndef __STORAGEHANDLERTYPE__
#define __STORAGEHANDLERTYPE__

#include "StorageHandler.h"
#include "DBTable.h"
#include <string>


class StorageHandlerType : public StorageHandler {

public:
	bool queryStorage(std::string);

//	bool setupStorageHandler(...);

	~StorageHandlerType();
    
};


#endif // __STORAGEHANDLERTYPE__