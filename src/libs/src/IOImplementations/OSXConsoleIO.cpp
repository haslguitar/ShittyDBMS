// Copyright 2015
// Cody Fleetwood
// James Morse
#include "IOHandlerType.h"
#include "IOHandler.h"
#include "DBTable.h"
#include <iostream>
#include <string>

// Initialize cursor position
int positionX = 0;
int positionY = 0;

/////////////////
/////////////////
// Output functions
/////////////////
/////////////////
bool IOHandlerType::output(std::string textString) {
    // Using std::cout to output for MACIO.
    // Could we switch to something more... OSX?
    if (std::cout << textString) { return true; }

    // If the std::cout stream failed for some reason, return false.
    return false;
}

bool IOHandlerType::output(std::string stringArray[]) {
    return false;
}

bool IOHandlerType::output(char* textCstring) {
    return false;
}

bool IOHandlerType::output(DBTable* tableOutput) {
    return false;
}

/////////////////
/////////////////
// Input functions
/////////////////
/////////////////
int IOHandlerType::getInt() {
    return 0;
}

char IOHandlerType::getChar() {
    return 'a';
}

bool IOHandlerType::getBool() {
    return false;
}

std::string IOHandlerType::getString() {
    return "";
}

// This should likely return a hash of the input password, not the actual text.
// However, since we probably shouldn't leave security up to the IO class,
// maybe I need to rethink where to hash the password?
std::string IOHandlerType::getPassword() {
    return "";
}

/////////////////
/////////////////
// Console functions
/////////////////
/////////////////
bool IOHandlerType::clearScreen() {
    return false;
}

bool IOHandlerType::setCursorPosition() {
    return false;
}

// The derived class is destroyed before the base class.
IOHandlerType::~IOHandlerType() {}
