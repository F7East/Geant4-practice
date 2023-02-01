/*
The "#ifndef" directive checks whether a specific macro, usually the 
name of the header file in uppercase letters, has been defined.
If it has not been defined, the code between "#ifndef" and 
"#endif" will be included in the compilation unit.
The macro is then defined using "#define" so that if the header 
file is included again later in the same compilation unit, the "#ifndef" 
check will evaluate to false and the code between "#ifndef" and "#endif" will be skipped.
*/

#ifndef CONSTRUCTION_HH
#define CONSTRUCTION_HH

#include "G4VUserDetectorConstruction.hh"
#include "G4VPhysicalVolume.hh"
#include "G4LogicalVolume.hh"
#include "G4Box.hh"
#include "G4PVPlacement.hh"
#include "G4NistManager.hh"
#include "G4SystemOfUnits.hh" // gets the SI units


class MyDetectorConstruction : public G4VUserDetectorConstruction{

    public:
    MyDetectorConstruction();
    ~MyDetectorConstruction();

    virtual G4VPhysicalVolume *Construct();

};

#endif