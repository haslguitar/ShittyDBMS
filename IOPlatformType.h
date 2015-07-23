
//This is a generic IOPlatformType header to be used to describe all implementations.
//All implementations should share the same interface, so it's ok to simplify to a single header.
//
//      \﻿ (•◡•) / 
//
//If you want to make an additional implementation (like for another platform),
//just include this header and IOHandler.h.

#ifndef __IOPLATFORMTYPE__
#define __IOPLATFORMTYPE__

#include "IOHandler.h"
#include "DBTable.h"
#include <string>

//IOPlatformTypeO is child of IOHandler.  Public functions are left public.
class IOPlatformType : public IOHandler {

public:
	//Prototype of IOHandler's virtual output() function for IOPlatformType.
	bool output(std::string textString);
	bool output(std::string[]);
	bool output(char*);
	bool output(int);
	bool output(DBTable*);

	int getInt();
	char getChar();
	bool getBool();
	std::string getString();
	std::string getPassword();

	bool clearScreen();
	bool setCursorPosition();

	//bool setupOutput(...);

	~IOPlatformType();
};


#endif // __IOPLATFORMTYPE__
