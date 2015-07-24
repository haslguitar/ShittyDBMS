#include "IOPlatformType.h"
#include "IOHandler.h"
#include "DBTable.h"
#include <iostream>
#include <string>

//Initialize cursor position
int positionX = 0;
int positionY = 0;


/////////////////
/////////////////
//Output functions
/////////////////
/////////////////
bool IOPlatformType::output(std::string textString) {
	
	//Using std::cout to output for MACIO. 
	//Could we switch to something more... OSX?
	if (std::cout << textString) { return true; }

	//If the std::cout stream failed for some reason, return false.
	return false;
}

bool IOPlatformType::output(std::string stringArray[]) {

	return false;
}

bool IOPlatformType::output(char* textCstring) {

	return false;
}

bool IOPlatformType::output(DBTable* tableOutput) {

	return false;
}

/////////////////
/////////////////
//Input functions
/////////////////
/////////////////
int IOPlatformType::getInt() {
	return 0;
}

char IOPlatformType::getChar() {

	return 'a';
}

bool IOPlatformType::getBool() {

	return false;
}

std::string IOPlatformType::getString() {

	return "";
}

//This should likely return a hash of the input password, not the actual text. 
//However, since we probably shouldn't leave security up to the IO class,
//maybe I need to rethink where to hash the password?
std::string IOPlatformType::getPassword() {

	return "";
}


/////////////////
/////////////////
//Console functions
/////////////////
/////////////////
bool IOPlatformType::clearScreen() {

	return false;
}

bool IOPlatformType::setCursorPosition() {

	return false;
}


//The derived class is destroyed before the base class.
IOPlatformType::~IOPlatformType() {}
