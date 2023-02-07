#include "detector.hh"

MySensitiveDetector :: MySensitiveDetector(G4String name) : G4VSensitiveDetector(name)
{}
MySensitiveDetector :: ~MySensitiveDetector(){}

G4bool MySensitiveDetector :: ProcessHits(G4Step *aStep, G4TouchableHistory *ROhist){
    G4Track *track = aStep -> GetTrack();

    if (track->GetDefinition()->GetParticleName() == "mu-")
    G4double energyDeposit = step->GetTotalEnergyDeposit();
    G4Track* track = step->GetTrack();
    {
        G4StepPoint *preStepPoint = aStep -> GetPreStepPoint(); 
        G4StepPoint *postStepPoint = aStep -> GetPostStepPoint(); 
        G4ThreeVector pos = preStepPoint->GetPosition();
        G4cout << "Muon position: " << pos << G4endl;
        G4cout << "Done" << G4endl;
        energyDeposit
    }

}

