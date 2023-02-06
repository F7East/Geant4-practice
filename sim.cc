#include <iostream>
#include "G4RunManager.hh"
#include "G4UImanager.hh"
#include "G4VisManager.hh"
#include "G4UIExecutive.hh"
#include "G4VisExecutive.hh"
#include "G4Text.hh"
#include "construction.hh"
#include "physics.hh"
#include "action.hh"
// #include "stepping_action.hh"

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

    // runManager->BeamOn(1000);
    
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


    UImanager->ApplyCommand("/vis/geometry/set/visibility logicWorld 0 false");
    UImanager->ApplyCommand("/vis/viewer/set/style surface");
    UImanager->ApplyCommand("/vis/viewer/set/hiddenMarker true");
    UImanager->ApplyCommand("/vis/viewer/set/viewpointThetaPhi 120 150");

    UImanager->ApplyCommand("/vis/set/textColour green");
    UImanager->ApplyCommand("/vis/set/textLayout right");
    UImanager->ApplyCommand("/vis/scene/add/text2D 0.9 -.9 24 ! ! miniproject");
    UImanager->ApplyCommand("/vis/scene/notifyHandlers");
    // UImanager->ApplyCommand("/vis/scene/add/text2D -0.3 0.8 12 ! ! " + message);
    UImanager->ApplyCommand("/vis/scene/notifyHandlers");

    UImanager->ApplyCommand("/vis/scene/add/scale");
    UImanager->ApplyCommand("/vis/scene/notifyHandlers");
    UImanager->ApplyCommand("/vis/scene/add/axes");
    UImanager->ApplyCommand("/vis/scene/notifyHandlers");
    UImanager->ApplyCommand("/vis/scene/add/eventID");
    UImanager->ApplyCommand("/vis/scene/notifyHandlers");
    UImanager->ApplyCommand("/vis/scene/add/date");
    UImanager->ApplyCommand("/vis/scene/notifyHandlers");
    UImanager->ApplyCommand("/vis/scene/add/logo2D");
    UImanager->ApplyCommand("/vis/scene/notifyHandlers");
    UImanager->ApplyCommand("/vis/scene/add/logo");
    UImanager->ApplyCommand("/vis/scene/notifyHandlers");

    UImanager->ApplyCommand("/vis/set/colour red");
    UImanager->ApplyCommand("/vis/set/lineWidth 2");
    UImanager->ApplyCommand("/vis/scene/add/frame");
    UImanager->ApplyCommand("/vis/scene/notifyHandlers");
    UImanager->ApplyCommand("/vis/set/colour");
    UImanager->ApplyCommand("/vis/set/lineWidth");

    // Start the user interface session
    ui->SessionStart();

    // Return 0 indicating success
    return 0;
}