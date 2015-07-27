// StandardConsoleIO.cpp
// Copyright 2015
// Cody Fleetwood
// James Morse

#include "IOHandler.h"
#include "IOHandlerType.h"
#include "DBTable.h"
#include <iostream>
#include <string>
#include <iomanip>

// Implementation specific variables
//
// Setw for std::cout
// int outputSetw = 10;

// bool IOHandlerType::setupIOHandler(...) {
// return false;
//}

// Generic use for output()
template<typename T>
void IOHandler::output(T outputThing) {
    std::cout << outputThing;
}

// Instantiate different versions of output() template
// This is required so functions are generated in vtable
// Without these, the compiler doesn't know what types
// could possibly sent to output(), so it wouldn't
// generate any code.  Poor, sad compiler.
template void IOHandler::output<int>(int);
template void IOHandler::output<std::string>(std::string);

// Template specialization for accepting chars.
// This was just a test.
template<> void IOHandler::output<char>(char outputThing) {
    std::cout << "char specialization: " << outputThing;
}
template<> void IOHandler::output<const char*>(const char* outputThing) {
    std::cout << "char* specialization: " << outputThing;
}

/////////////////
/////////////////
// Input functions
/////////////////
/////////////////
int IOHandlerType::getInt() {
    int temp;
    std::cin >> temp;
    return temp;
}

char IOHandlerType::getChar() {
    return std::cin.get();
}

bool IOHandlerType::getBool() {
    bool temp;
    std::cin >> temp;
    return temp;
}

std::string IOHandlerType::getString() {
    std::string temp;
    getline(std::cin, temp);
    return temp;
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

