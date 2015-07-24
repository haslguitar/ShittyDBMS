#include "IOPlatformType.h"
#include "IOHandler.h"
#include "DBTable.h"
#include <string>

//Implement NULLIO's version of output() function.
bool IOPlatformType::output(std::string textString) {
	return true;  //I mean, we didn't do anything.  That's true.
}

//The derived class is destroyed before the base class.


bool IOPlatformType::output(std::string[]) { return false;  };
bool IOPlatformType::output(char*) { return false; };
bool IOPlatformType::output(int) { return false; };
bool IOPlatformType::output(DBTable*) { return false; };

int IOPlatformType::getInt() { return 0; };
char IOPlatformType::getChar() { return ' '; };
bool IOPlatformType::getBool() { return false; };
std::string IOPlatformType::getString() { return ""; };
std::string IOPlatformType::getPassword() { return ""; };

bool IOPlatformType::clearScreen() { return false; };
bool IOPlatformType::setCursorPosition() { return false; };

//bool IOPlatformType::setupOutput(...) { return false; };

IOPlatformType::~IOPlatformType() {};