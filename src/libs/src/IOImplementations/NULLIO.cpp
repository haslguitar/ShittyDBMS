#include "IOHandlerType.h"
#include "IOHandler.h"
#include "DBTable.h"
#include <string>

//Implement NULLIO's version of output() function.
bool IOHandlerType::output(std::string textString) {
	return true;  //I mean, we didn't do anything.  That's true.
}

//The derived class is destroyed before the base class.


bool IOHandlerType::output(std::string[]) { return false;  };
bool IOHandlerType::output(char*) { return false; };
bool IOHandlerType::output(int) { return false; };
bool IOHandlerType::output(DBTable*) { return false; };

int IOHandlerType::getInt() { return 0; };
char IOHandlerType::getChar() { return ' '; };
bool IOHandlerType::getBool() { return false; };
std::string IOHandlerType::getString() { return ""; };
std::string IOHandlerType::getPassword() { return ""; };

bool IOHandlerType::clearScreen() { return false; };
bool IOHandlerType::setCursorPosition() { return false; };

//bool IOHandlerType::setupOutput(...) { return false; };

IOHandlerType::~IOHandlerType() {};