# ShittyDBMS
The intent of this project is to learn C++.  ShittyDBMS is a database management system that is crossplatform.  It can be extended to have io and storage on different platforms by deriving a new class from IOHandler and StorageHandler respectively.

We use Floobits! 

[![Floobits Status](https://floobits.com/haslguitar/ShittyDBMS.svg)](https://floobits.com/haslguitar/ShittyDBMS/redirect)

## Compilation
To compile link main, IOHandler, StorageHandler, and your choice of implementation for both IOHandler and StorageHandler.
Ex: `g++ -o output.exe ./src/apps/ShittyDBMS/main.cpp ./src/libs/src/IOHandler.cpp ./src/libs/src/StorageHandler.cpp ./src/libs/src/IOImplementations/StandardConsoleIO.cpp ./src/libs/src/StorageImplementations/NULLStorage.cpp  -I ./src/libs/src`

## Contributors
Cody Fleetwood 
James Morse