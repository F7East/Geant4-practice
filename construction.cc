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

    // adding SiO2 as a material
    G4Material *SiO2 = new G4Material("SiO2", 2.201*g/cm3, 2);// name, density, number of compoenents
    SiO2 -> AddElement(nist -> FindOrBuildElement("Si"), 1);
    SiO2 -> AddElement(nist -> FindOrBuildElement("O"), 2); 

    // adding water
    G4Material *H2O = new G4Material("H2O", 1.000*g/cm3, 2);
    H2O -> AddElement(nist -> FindOrBuildElement("O"), 1);
    H2O -> AddElement(nist -> FindOrBuildElement("H"), 2); 

    // adding carbon
    G4Element *C = nist -> FindOrBuildElement("C");

    // building Aerogel
    G4Material *Aerogel = new G4Material("Aerogel", 0.200*g/cm3, 3);
    Aerogel -> AddMaterial(SiO2, 62.5*perCent);
    Aerogel -> AddMaterial(H2O, 37.4*perCent);
    Aerogel -> AddElement(C, 0.1*perCent);

    // adding optical parameters of the aerogel because geant4 does not reflective angle of the gel
    // chrenkov radiation happens when a particle moves faster than the speed of light through medium
    // 100Gev is definitely faster  
    // note the energies have to be written in the increasing order, otherwise it does not work
    G4double energy[2] = {1.239841939*eV/0.9, 1.239841939*eV/0.2}; // energy for 0.2 is blue light and 0.9 is red light wavelengths
    G4double rindexAerogel[2] = {1.1,1.1}; // relective index for 0.2 and 0.9 respectively, could have a lot of values for dispersion  

    G4MaterialPropertiesTable *mptAerogel = new G4MaterialPropertiesTable();
    mptAerogel -> AddProperty("RINDEX", energy, rindexAerogel, 2); // the 2 is for 2 value in rindex array    
    Aerogel -> SetMaterialPropertiesTable(mptAerogel);

    // air and its optical properties
    G4Material *worldMat = nist->FindOrBuildMaterial("G4_AIR");
    G4MaterialPropertiesTable *mptWorld = new G4MaterialPropertiesTable();
    G4double rindexWorld[2] = {1.0, 1.0};
    mptWorld -> AddProperty("RINDEX", energy, rindexWorld, 2);
    worldMat -> SetMaterialPropertiesTable(mptWorld);

    //to create a box (a space to be filled) (0.5 is a half size in x,y, or z direction)
    G4Box *solidWorld = new G4Box("solidWorld", 0.5*m,0.5*m,0.5*m); // solidWorld has to be in "" not ''

    //to add the world material to the solidWorld, fill it in ig?
    G4LogicalVolume *logicWorld = new G4LogicalVolume(solidWorld, worldMat,"logicWorld");

    //adding physical volume. take args as the following: rotation, center, logic volume, name, mother volume (0 if none),
    //create as a boolean, copy number (number of times one volume is inserted into another), check overlaps (always set true)

    //on mother volume. it always has to engulf any volume touching, otherwise it messes with the simulation. 0 if the 
    // volume has no mothervolume

    G4VPhysicalVolume *physWorld = new G4PVPlacement(0,G4ThreeVector(0.,0.,0.), logicWorld, "physWorld", 0, false, 0, true);

    // adding gel radiator for Cherenkov radtiation
    G4Box *solidRadiator = new G4Box("solidRadiator", 0.4*m, 0.4*m, 0.01*m);
    G4LogicalVolume *logicRadiator = new G4LogicalVolume(solidRadiator, Aerogel, "logicRadiator");
    G4VPhysicalVolume *physRadiator = new G4PVPlacement(0, G4ThreeVector(0.,0.,0.25*m), logicRadiator, \
    "physRadiator", logicWorld, false, 0, true);
    return physWorld; //highest mother volue has to be returned 

}