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

bool IOHandlerType::output(std::string textString) {
    if (std::cout << std::setw(0) << textString) {
        return true;
    }

    return false;
}

// std::string myString[] = {"Welcome to ShittyDBMS",
//                          "by james morse",
//                          "cody fleetwood"};
bool IOHandlerType::output(std::string stringArray[]) {
    return (this->output(stringArray[0]));
}

bool IOHandlerType::output(char* textCstring) {
    if (std::cout << textCstring) { return true; }
    return false;
}

bool IOHandlerType::output(int integer) {
    if (std::cout << integer) { return true; }
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

