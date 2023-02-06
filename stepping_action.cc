#include "stepping_action.hh"

MuonCounter::MuonCounter() : fMuonCount(0) {}

void MuonCounter::UserSteppingAction(const G4Step* step)
{
  // Check if the particle is a muon
  if (step->GetTrack()->GetParticleDefinition()->GetParticleName() != "mu-") {
    return;
  }

  // Check if the step was taken inside the "physTES" volume
  G4VPhysicalVolume* volume = step->GetPreStepPoint()->GetPhysicalVolume();
  if (volume->GetName() != "physDisk2") {
    return;
  }
  
  // Increment the muon count
  ++fMuonCount;
}

G4int MuonCounter::GetMuonCount() const 
{ 
  return fMuonCount; 
}