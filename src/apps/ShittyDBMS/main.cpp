//*********************************************************************************************//







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
//Main.cpp
//Entry point for Shitty DBMS
//James Morse
//Cody Fleetwood
//
//
//Make sure to compile whatever platform file you need:
//g++ -std=c++11 -o OutputFile main.cpp IOHandler.cpp ./IOImplementations/MACIO.cpp
//
//or for null output, which is basically going to be throw away,
//g++ -std=c++11 -o OutputFile main.cpp IOHandler.cpp ./IOImplementations/NULLIO.cpp
//
//or for Windows output and compiling with cl.exe,
//cl main.cpp IOHandler.cpp ./IOImplementations/WINDOWSIO.cpp /FeOutputFile.exe
//
//or something like that.  You get the idea, or not!  Muahahahaha!.
/**************************************/


//Generic includes
#include "IOHandler.h"
#include "IOPlatformType.h"
#include <string>

int main() {
	
	//Create IOHandler based on platform.
	IOHandler *myHandler = new IOPlatformType();

	//Using IOHandler
	std::string text = "hey";
	myHandler->output(text);

	std::string text_2 = "\nEnter an int: ";
	myHandler->output(text_2);
	
	int anInt = myHandler->getInt();
	myHandler->output(anInt);

	//Delete the IOHandler object
	//The destructor for the derived class is called first.
	delete myHandler;
	
	return 0;
}




