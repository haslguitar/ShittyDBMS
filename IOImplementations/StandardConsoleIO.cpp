// StandardConsoleIO.cpp

#include "IOHandler.h"
#include "IOPlatformType.h"
#include "DBTable.h"
#include <iostream>
#include <string>
#include <iomanip>


//Implementation specific variables
//
//Setw for std::cout
//int outputSetw = 10;

//bool IOPlatformType::setupOutput(...) {
//	return false;
//}

bool IOPlatformType::output(std::string textString) {
	if (std::cout << std::setw(0) << textString) {
		return true;
	}

	return false;
}

//std::string myString[] = {"Welcome to ShittyDBMS",
//                          "by james morse", 
//                          "cody fleetwood"};
bool IOPlatformType::output(std::string stringArray[]) {
	return (this->output(stringArray[0]));
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

	return std::cin.get();
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

