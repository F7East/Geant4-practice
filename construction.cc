#include "construction.hh"

MyDetectorConstruction :: MyDetectorConstruction(){}

MyDetectorConstruction :: ~MyDetectorConstruction(){}


G4VPhysicalVolume *MyDetectorConstruction :: Construct(){
    G4NistManager *nist = G4NistManager :: Instance();
    
    // adding stainless steel Stainless Steel 304 1.4301 (https://www.thyssenkrupp-materials.co.uk/stainless-steel-304-14301.html)

    G4Material *stainlessSteel = new G4Material("StainlessSteel", 8.000 * g/cm3, 9);

        // Define the elements composing the material
        G4Element*  C = nist -> FindOrBuildElement("C");
        G4Element* Cr = nist -> FindOrBuildElement("Cr");
        G4Element* Mn = nist -> FindOrBuildElement("Mn");
        G4Element* Si = nist -> FindOrBuildElement("Si");
        G4Element*  P = nist -> FindOrBuildElement("P");
        G4Element*  S = nist -> FindOrBuildElement("S");
        G4Element* Ni = nist -> FindOrBuildElement("Ni");
        G4Element*  N = nist -> FindOrBuildElement("N");
        G4Element* Fe = nist -> FindOrBuildElement("Fe");

        // Add the elements to the material
        stainlessSteel->AddElement(C , 0.07 * perCent);
        stainlessSteel->AddElement(Cr, 18.0 * perCent);
        stainlessSteel->AddElement(Mn, 2.00 * perCent);
        stainlessSteel->AddElement(Si, 1.00 * perCent);
        stainlessSteel->AddElement(P , 0.045* perCent);
        stainlessSteel->AddElement(S , 0.015* perCent);
        stainlessSteel->AddElement(Ni, 9.5  * perCent);
        stainlessSteel->AddElement(N , 0.10 * perCent);
        stainlessSteel->AddElement(Fe, 69.27* perCent);
    
    // Create titanium

    G4Material *titanium = new G4Material("Titanium", 4.5 * g/cm3, 1);

        G4Element *Ti = nist -> FindOrBuildElement("Ti");
        titanium -> AddElement(Ti, 1.00);

    // air and its optical properties
    G4double energy[2] = {1.239841939*eV/0.9, 1.239841939*eV/0.2};
    G4Material *worldMat = nist->FindOrBuildMaterial("G4_AIR");
    G4MaterialPropertiesTable *mptWorld = new G4MaterialPropertiesTable();
    G4double rindexWorld[2] = {1.0, 1.0};
    mptWorld -> AddProperty("RINDEX", energy, rindexWorld, 2);
    worldMat -> SetMaterialPropertiesTable(mptWorld);

    //to create a box (a space to be filled) (0.5 is a half size in x,y, or z direction)
    G4Box *solidWorld = new G4Box("solidWorld", 1.*m,1.*m,1.*m); // solidWorld has to be in "" not ''

    //to add the world material to the solidWorld, fill it in ig?
    G4LogicalVolume *logicWorld = new G4LogicalVolume(solidWorld, worldMat,"logicWorld");

    //adding physical volume
    G4VPhysicalVolume *physWorld = new G4PVPlacement(0,G4ThreeVector(0.,0.,0.), logicWorld, "physWorld", 0, false, 0, true);

    // adding TES as instucted
    G4Box *TES = new G4Box("TES", 20*um, 20*um, 20*nm);
    G4LogicalVolume *logicTES = new G4LogicalVolume(TES, titanium, "logicTES");
    G4VPhysicalVolume *physTES = new G4PVPlacement(0, G4ThreeVector(0. ,0. , 0.2*m), logicTES,\
        "physTES", logicWorld, false, 0 , true);

    // adding Dilution Refrigerador

    // Define the cylinder dimensions
    G4double height = 1. * m;
    G4double innerRadius = 247 * mm;
    G4double outerRadius = 250 * mm;
    G4double startAngle = 0. * deg;
    G4double spanningAngle = 360. * deg;

    // Create the cylinder solid volume
    G4Tubs *cylinder = new G4Tubs("Cylinder", innerRadius, outerRadius, height / 2, startAngle, spanningAngle);
    G4LogicalVolume *logicalCylinder = new G4LogicalVolume(cylinder, stainlessSteel, "LogicalCylinder");

    // Place the cylinder in the world volume
    G4ThreeVector cylinderPosition(0., 0., 0.);
    G4RotationMatrix cylinderRotation;
    G4Transform3D cylinderTransform(cylinderRotation, cylinderPosition);
    G4VPhysicalVolume *physCylinder =  new G4PVPlacement(cylinderTransform, logicalCylinder, "PhysicalCylinder",\
        logicWorld, false, 0);

    return physWorld; //highest mother volue has to be returned 

}