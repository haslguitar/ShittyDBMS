#ifndef __STORAGEHANDLERTYPE__
#define __STORAGEHANDLERTYPE__

#include "StorageHandler.h"
#include <string>


class StorageHandlerType : public StorageHandler {
public:
	DBTable query(std::string);

	bool setupStorageHandler(...);

	~StorageHandlerType();
    

};


#endif // __STORAGEHANDLERTYPE__