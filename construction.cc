#include "construction.hh"

MyDetectorConstruction :: MyDetectorConstruction(){}

MyDetectorConstruction :: ~MyDetectorConstruction(){}


G4VPhysicalVolume *MyDetectorConstruction :: Construct(){

    G4NistManager *nist = G4NistManager :: Instance();
    G4VisAttributes visAttributes;
    visAttributes.SetLineWidth(1.0);
    visAttributes.SetVisibility(true);
    visAttributes.SetForceSolid(false);
    // visAttributes.SetTransparency(50);
    // visAttributes.SetForceWireframe(true);
    visAttributes.SetColour(G4Colour(0.8, 0.8, 0.8));
    
    G4double energy[2] = {1.239841939*eV/0.9, 1.239841939*eV/0.3};

    // centering

        G4double x = 0.6 * m;
        G4double y = 0. * m;

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

        G4OpticalSurface *opticalStainlessSteel = new G4OpticalSurface("opticalStainlessSteel");
        opticalStainlessSteel->SetType(dielectric_dielectric);
        opticalStainlessSteel->SetFinish(polished);
        opticalStainlessSteel->SetModel(unified);

        // Create a material properties table for the optical surface
        G4double rindexStainlessSteel[2] = {2.82, 0.90};
        G4MaterialPropertiesTable *mptStainlessSteel = new G4MaterialPropertiesTable();
        mptStainlessSteel->AddProperty("RINDEX", energy, rindexStainlessSteel, 2);
        opticalStainlessSteel->SetMaterialPropertiesTable(mptStainlessSteel);

    
    // Create titanium

        G4Material *titanium = new G4Material("Titanium", 4.5 * g/cm3, 1);
        G4Element *Ti = nist -> FindOrBuildElement("Ti");
        titanium -> AddElement(Ti, 1.00);

        G4OpticalSurface *opticalTitanium = new G4OpticalSurface("opticalTitanium");
        opticalTitanium->SetType(dielectric_dielectric);
        opticalTitanium->SetFinish(polished);
        opticalTitanium->SetModel(unified);

        // Create a material properties table for the optical surface
        G4double rindexTitanium[2] = {3.23, 1.44};
        G4MaterialPropertiesTable *mptTitanium = new G4MaterialPropertiesTable();
        mptTitanium->AddProperty("RINDEX", energy, rindexTitanium, 2);
        opticalTitanium->SetMaterialPropertiesTable(mptTitanium);

    // air and its optical properties

        G4Material *worldMat = nist->FindOrBuildMaterial("G4_AIR");
        G4MaterialPropertiesTable *mptWorld = new G4MaterialPropertiesTable();
        G4double rindexWorld[2] = {1.0, 1.0};
        mptWorld -> AddProperty("RINDEX", energy, rindexWorld, 2);
        worldMat -> SetMaterialPropertiesTable(mptWorld);

    // adding world volume 

        G4Box *solidWorld = new G4Box("solidWorld", 1.*m,1.*m,1.*m);
        G4LogicalVolume *logicWorld = new G4LogicalVolume(solidWorld, worldMat,"logicWorld");
        G4VPhysicalVolume *physWorld = new G4PVPlacement(0,G4ThreeVector(0.,0.,0.), logicWorld,\
        "physWorld", 0, false, 0, true);

    // adding Envelope 

        // G4Box* solidEnv = new G4Box("Envelope", 1., 1., 1.);
        // G4LogicalVolume* logicEnv = new G4LogicalVolume(solidEnv, env_mat, "Envelope");        
        // new G4PVPlacement(0,G4ThreeVector(),logicEnv,"Envelope",logicWorld,false,0,checkOverlaps);    

    // adding TES

        G4Box *TES = new G4Box("TES", 20 * mm, 20 * mm, 0.20 * mm);
        logicTES = new G4LogicalVolume(TES, titanium, "logicTES");
        G4VPhysicalVolume *physTES = new G4PVPlacement(0, G4ThreeVector(x , y , 0.2*m), logicTES,\
            "physTES", logicWorld, false, 0 , true);
        G4LogicalBorderSurface* logicalBorderTES = new G4LogicalBorderSurface("LogicalBorderTES", \
            physTES, physWorld, opticalTitanium);

        

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

        // Set the visibility attributes for the cylinder
        logicalCylinder->SetVisAttributes(visAttributes);

        // Place the cylinder in the world volume
        G4ThreeVector cylinderPosition(x, y, 0.);
        G4RotationMatrix cylinderRotation;
        G4Transform3D cylinderTransform(cylinderRotation, cylinderPosition);
        G4VPhysicalVolume *physicalCylinder = new G4PVPlacement(cylinderTransform, logicalCylinder, "PhysicalCylinder", \
            logicWorld, false, 0);

        // Create a logical border surface between the cylinder and the world volume
        G4LogicalBorderSurface* logicalBorderCylinder = new G4LogicalBorderSurface("LogicalBorderSurface", \
            physicalCylinder, physWorld, opticalStainlessSteel);


        G4double diskRadius = 0.25 * m;
        G4double diskThickness = 3. * mm;

        // Create the disk solid volumes
        G4Tubs* disk = new G4Tubs("Disk", 0., diskRadius, diskThickness / 2, 0., 360. * deg);

        // Create logical volumes for the disks
        G4LogicalVolume* logicalDisk = new G4LogicalVolume(disk, stainlessSteel, "LogicalDisk");

        // Place the disks at both ends of the cylinder
        G4ThreeVector diskPosition1(x, y, -height / 2. - diskThickness / 2.);
        G4RotationMatrix diskRotation1;
        G4Transform3D diskTransform1(diskRotation1, diskPosition1);
        G4VPhysicalVolume  *physDisk1 = new G4PVPlacement(diskTransform1, logicalDisk, "PhysicalDisk1", logicWorld, false, 0);
        G4LogicalBorderSurface* logicalBorderDisk1 = new G4LogicalBorderSurface("LogicalBorderSurface", \
            physDisk1, physWorld, opticalStainlessSteel);

        G4ThreeVector diskPosition2(x, y, height / 2. + diskThickness / 2.);
        G4RotationMatrix diskRotation2;
        G4Transform3D diskTransform2(diskRotation2, diskPosition2);
        G4VPhysicalVolume  *physDisk2 = new G4PVPlacement(diskTransform2, logicalDisk, "PhysicalDisk2", logicWorld, false, 0);
        G4LogicalBorderSurface* logicalBorderDisk2 = new G4LogicalBorderSurface("LogicalBorderSurface", \
            physDisk1, physWorld, opticalStainlessSteel);
        

    return physWorld; //highest mother volue has to be returned 

}

void MyDetectorConstruction :: ConstructSDandField(){
    MySensitiveDetector *sensDet = new MySensitiveDetector("SensetiveDetector");
    sensDet ->SetThreshold(1*eV);
    logicTES -> SetSensitiveDetector(sensDet);
}