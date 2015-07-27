// Main.cpp
// Copyright 2015
// James Morse
// Cody Fleetwood
/**************************************/
/*
(`-').-> (`-').->  _     (`-')     (`-')                     _(`-')   <-.(`-') <-. (`-')   (`-').->
( OO)_   (OO )__  (_)    ( OO).->  ( OO).->       .->       ( (OO ).-> __( OO)    \(OO )_  ( OO)_
(_)--\_) ,--. ,'-' ,-(`-')/    '._  /    '._   ,--.'  ,-.     \    .'_ '-'---.\ ,--./  ,-.)(_)--\_)
/    _ / |  | |  | | ( OO)|'--...__)|'--...__)(`-')'.'  /     '`'-..__)| .-. (/ |   `.'   |/    _ /
\_..`--. |  `-'  | |  |  )`--.  .--'`--.  .--'(OO \    /      |  |  ' || '-' `.)|  |'.'|  |\_..`--.
.-._)   \|  .-.  |(|  |_/    |  |      |  |    |  /   /)      |  |  / :| /`'.  ||  |   |  |.-._)   \
\       /|  | |  | |  |'->   |  |      |  |    `-/   /`       |  '-'  /| '--'  /|  |   |  |\       /
`-----' `--' `--' `--'      `--'      `--'      `--'         `------' `------' `--'   `--' `-----'
*/
//
// Compile by including both an IOImplementation and a StorageImplementation
// along with main.cpp, IOHandler.cpp, and StorageHandler.cpp
//
// or for Windows output and compiling with cl.exe,
// cl main.cpp IOHandler.cpp ./IOImplementations/WINDOWSIO.cpp /FeOutputFile.exe
//
// or something like that.  You get the idea, or not!  Muahahahaha!.
/**************************************/

// Generic includes
#include "IOHandler.h"
#include "IOHandlerType.h"
#include "StorageHandler.h"
#include "StorageHandlerType.h"
#include <string>

int main() {

    // Create IOHandler based on platform.
    IOHandler *myIOHandler = new IOHandlerType();

    // Create a StorageHandler
    StorageHandler *myStorageHandler = new StorageHandlerType();

    // Using IOHandler
    std::string text = "hey";
    myIOHandler->output(text);

    std::string text_2 = "\nEnter an int: ";
    myIOHandler->output(text_2);

    int anInt = myIOHandler->getInt();
    myIOHandler->output(anInt);

    // Delete the IOHandler object
    // The destructor for the derived class is called first.
    delete myIOHandler;
    delete myStorageHandler;

    return 0;
}




