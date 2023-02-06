#ifndef DETECTOR_HH
#define DETECTOR_HH

#include "G4VSensitiveDetector.hh"
#include "G4THitsMap.hh"

class Detector: public G4VSensitiveDetector
{
  public:
    Detector(const G4String& name, const G4String& hitsCollectionName);
    virtual ~Detector();
    virtual void Initialize(G4HCofThisEvent* hce);
    virtual G4bool ProcessHits(G4Step* step, G4TouchableHistory* history);
};

#endif
