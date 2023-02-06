#ifndef STEPPING_ACTION_HH
#define STEPPING_ACTION_HH

#include "G4UserSteppingAction.hh"
#include "G4Step.hh"
#include "G4Track.hh"
#include "G4ParticleDefinition.hh"
#include "G4VPhysicalVolume.hh"

class MuonCounter : public G4UserSteppingAction
{
public:
  MuonCounter();
  virtual ~MuonCounter() {}
  
  virtual void UserSteppingAction(const G4Step* step);
  
  G4int GetMuonCount() const;

private:
  G4int fMuonCount;
};

#endif // MUON_COUNTER_H

