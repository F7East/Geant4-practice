#include <iostream>
#include "G4RunManager.hh"
#include "G4UImanager.hh"
#include "G4VisManager.hh"
#include "G4UIExecutive.hh"
#include "G4VisExecutive.hh"
#include "construction.hh"
#include "physics.hh"
#include "action.hh"
/*
This is a basic script to run a Geant4 simulation using the 
Geant4 toolkit. The code creates and sets up objects that control 
the simulation run, visualization and user interface.
*/

/*
char** argv: argv is a pointer to an array of strings, where each string is a pointer to a character.
-> operator: The -> operator is used to dereference a pointer to an object and access its members.
:: operator: The :: operator is used to access members of a class, namespace, or enumeration in the global scope.
*/

int main(int argc, char** argv){

    // Create a new instance of G4RunManager
    G4RunManager *runManager = new G4RunManager();
    runManager->SetUserInitialization(new MyDetectorConstruction());
    
    MyPhysicsList* physicsList = new MyPhysicsList();
    runManager->SetUserInitialization(physicsList);
    runManager->SetUserInitialization(new MyActionInitialization());
    
    runManager->Initialize();
    
    // Create a new instance of G4UIExecutive to handle the user interface
    G4UIExecutive *ui = new G4UIExecutive(argc, argv);

    // Create a new instance of G4VisManager to handle visualization
    G4VisManager *visManager = new G4VisExecutive();
    
    // Initialize the visualization manager
    visManager->Initialize();

    // Get the pointer to the UI manager singleton
    G4UImanager *UImanager = G4UImanager :: GetUIpointer();

    //showing the stuff:
    UImanager->ApplyCommand("/vis/open OGL"); //showing screen
    UImanager->ApplyCommand("vis/viewer/viewpointVector 1 1 1"); //default viewpoint
    UImanager->ApplyCommand("/vis/drawVolume");
    UImanager->ApplyCommand("/vis/viewer/set/autoRefresh true");
    UImanager->ApplyCommand("/vis/scene/add/trajectories smooth");
    UImanager->ApplyCommand("/vis/scene/endOfEventAction accumulate");
    UImanager->ApplyCommand("/vis/viewer/set/viewpointThetaPhi 90 0");
    UImanager->ApplyCommand("/vis/viewer/set/style frame");
    // UImanager->ApplyCommand("/vis/geometry/set/visibility logicWorld 0 false");
    UImanager->ApplyCommand("/vis/scene/add/scale");
    UImanager->ApplyCommand("/vis/scene/add/axes");
    UImanager->ApplyCommand("/vis/scene/add/frame");

    // Start the user interface session
    ui->SessionStart();

    // Return 0 indicating success
    return 0;
}