#include "IOPlatformType.h"
#include "IOHandler.h"
#include <iostream>
#include <string>

bool IOPlatformType::output(std::string textString) {
	
	//Using std::cout to output for Windows. 
	//Could we switch to something more... Windows?
	if (std::cout << textString) { return true; }

	//If the std::cout stream failed for some reason, return false.
	return false;
}

bool IOPlatformType::output(std::string stringArray[]) {
    
	return false;
}

bool IOPlatformType::output(char* textCstring) {
	if (std::cout << textCstring) { return true; }
	return false;
}

bool IOPlatformType::output(int integer) {
    if (std::cout << integer) { return true; }
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
	int temp;
	std::cin >> temp;
	return temp;
}

char IOPlatformType::getChar() {
    char temp;
    std::cin.get(temp);
	return temp;
}

bool IOPlatformType::getBool() {
    bool temp;
    std::cin >> temp;
	return temp;
}

std::string IOPlatformType::getString() {
    std::string temp;
    getline(std::cin, temp);
	return temp;
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
