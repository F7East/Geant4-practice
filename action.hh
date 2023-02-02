#ifndef ACTION_HH
#define ACTION_HH

#include "G4VUserActionInitialization.hh"
#include "generator.hh"

class MyActionInitialization : public G4VUserActionInitialization {
    
    public:
    MyActionInitialization();
    ~MyActionInitialization();

    virtual void Build() const; //this is the main function of the program, the particle gun
};

#endif

/*
In C++, the keyword "virtual" is used in front of a member function declaration to indicate that 
the function is meant to be overridden in derived classes.

he keyword "const" is used to indicate that a function is a "constant member function". This means
 that the function promises not to modify the state of the object on which it is called, and that 
 it can be safely called on a constant object.

 "void" is a keyword used to declare the return type of a function that does not return a value.
*/