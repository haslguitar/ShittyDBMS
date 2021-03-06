// Copyright 2015
// Cody Fleetwood
// James Morse
#ifndef __IOHANDLER__
#define __IOHANDLER__

#include "DBTable.h"
#include <string>

// Abstract base class
// Used to describe interface for IOHandler object types
// To give birth (child. eh? hah.), inherit and implement
// pure virtual functions.
class IOHandler {
 public:
    // Template output() so it can be implemented in
    // IOImplementations to accept multiple types
    template<typename T>
    void output(T);

    virtual int         getInt() = 0;
    virtual char        getChar() = 0;
    virtual bool        getBool() = 0;
    virtual std::string getString() = 0;
    virtual std::string getPassword() = 0;

    virtual bool        clearScreen() = 0;
    virtual bool        setCursorPosition() = 0;

    // virtual bool        setupIOHandler(...) = 0;

    // On destruction, first the derived class is destroyed, then the base.
    virtual ~IOHandler();
};

#endif  // __IOHANDLER__
