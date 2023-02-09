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

// construction 
#include "G4VUserDetectorConstruction.hh"
#include "G4VPhysicalVolume.hh"
#include "G4LogicalVolume.hh"
#include "G4Box.hh"
#include "G4PVPlacement.hh"
#include "detector.hh"

// spacial management
#include "G4RotationMatrix.hh"
#include "G4Transform3D.hh"
#include "G4Tubs.hh"

// visual properties
#include "G4VisAttributes.hh"
#include "G4Colour.hh"
#include "G4OpticalSurface.hh"
#include "G4LogicalBorderSurface.hh"
#include "G4MaterialPropertiesTable.hh"

// elements and units
#include "G4NistManager.hh"
#include "G4SystemOfUnits.hh" // gets the SI units

// steps
#include "G4UserLimits.hh"

class MyDetectorConstruction : public G4VUserDetectorConstruction{

    public:
    MyDetectorConstruction();
    ~MyDetectorConstruction();

    virtual G4VPhysicalVolume *Construct();
    MySensitiveDetector *sensDet;
    
    private:
    G4LogicalVolume *logicTES;
    virtual  void ConstructSDandField();

};

#endif