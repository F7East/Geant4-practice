#include "detector.hh"

MySensitiveDetector :: MySensitiveDetector(G4String name) : G4VSensitiveDetector(name), threshold(0)
{
  muonCount = 0;
  energyTotal = 0;
}
MySensitiveDetector :: ~MySensitiveDetector(){}

void MySensitiveDetector::SetThreshold(G4double threshold)
{
  this->threshold = threshold;
}

G4bool MySensitiveDetector :: ProcessHits(G4Step *aStep, G4TouchableHistory *ROhist){
    G4Track *track = aStep -> GetTrack();
    
    if (track->GetDefinition()->GetParticleName() == "mu-")
    {
    if (aStep->GetTotalEnergyDeposit() < threshold)return false;
    G4StepPoint *preStepPoint = aStep -> GetPreStepPoint(); 
    G4StepPoint *postStepPoint = aStep -> GetPostStepPoint(); 
    G4ThreeVector pos = preStepPoint->GetPosition();
    energyTotal += aStep->GetTotalEnergyDeposit();
    
    G4VPhysicalVolume* physicalVolume = preStepPoint->GetPhysicalVolume();
    if (physicalVolume->GetName() == "physTES"){
      if (!track->GetUserInformation()){
        track->SetUserInformation(new G4VUserTrackInformation);
        
        muonCount += 1;
        // G4cout << "Muon position: " << pos << G4endl;
        // G4cout << "Done" << G4endl;
        G4cout << "Muon count: " << muonCount << G4endl;
        G4cout << "Energy Deposited: " << energyTotal << G4endl; 
      }
    }

    
    }

}

