#ifndef __STORAGEHANDLER__
#define __STORAGEHANDLER__
#include "DBTable.h"
#include <string>

class StorageHandler {
public:
	virtual DBTable query(std::string) = 0;

	virtual bool setupStorageHandler(...) = 0;

	virtual ~StorageHandler();
    

};


#endif // __STORAGEHANDLER__