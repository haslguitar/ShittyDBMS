// Copyright 2015
// Cody Fleetwood
// James Morse
#include "IOHandlerType.h"
#include "IOHandler.h"
#include "DBTable.h"
#include <string>

bool IOHandlerType::output(std::string textString) { return true; }
bool IOHandlerType::output(std::string[] X) { return false;  }
bool IOHandlerType::output(char* X) { return false; }
bool IOHandlerType::output(int X) { return false; }
bool IOHandlerType::output(DBTable* X) { return false; }

int IOHandlerType::getInt() { return 0; }
char IOHandlerType::getChar() { return ' '; }
bool IOHandlerType::getBool() { return false; }
std::string IOHandlerType::getString() { return ""; }
std::string IOHandlerType::getPassword() { return ""; }

bool IOHandlerType::clearScreen() { return false; }
bool IOHandlerType::setCursorPosition() { return false; }

// bool IOHandlerType::setupOutput(...) { return false; };

// The derived class is destroyed before the base class.
IOHandlerType::~IOHandlerType() {}
