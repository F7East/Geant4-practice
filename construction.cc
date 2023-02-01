#include "construction.hh"

MyDetectorConstruction :: MyDetectorConstruction(){}

MyDetectorConstruction :: ~MyDetectorConstruction(){}


G4VPhysicalVolume *MyDetectorConstruction :: Construct(){
    G4NistManager *nist = G4NistManager :: Instance();
    
    /*
    you need to create a world material without which it is 
    impossible to define detector geometry, and it has to be
    returned in the end. For every volume you need world volume,
    logical volume which includes the material, and finally, the
    physical volume which places the volume in geant4 application

    I don't quite get it yet tho
    */ 
    G4Material *worldMat = nist->FindOrBuildMaterial("G4_AIR");

    //to create a box (a space to be filled) (0.5 is a half size in x,y, or z direction)
    G4Box *solidWorld = new G4Box("solidWorld", 0.5*m,0.5*m,0.5*m); // solidWorld has to be in "" not ''

    //to add the world material to the solidWorld, fill it in ig?
    G4LogicalVolume *logicWorld = new G4LogicalVolume(solidWorld, worldMat,"logicWorld");

    //adding physical volume. take args as the following: rotation, center, logic volume, name, mother volume (0 if none),
    //boolean operators(?), copy number (number of times one volume is inserted into another), check overlaps (always set true)

    //on mother volume. it always has to engulf any volume touching, otherwise it messes with the simulation. 0 if the 
    // volume has no mothervolume

    G4VPhysicalVolume *physWorld = new G4PVPlacement(0,G4ThreeVector(0.,0.,0.), logicWorld, "physWorld", 0, false, 0, true);

    return physWorld; //highest mother volue has to be returned 

}