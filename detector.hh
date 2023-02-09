#ifndef DETECTOR_HH
#define DETECTOR_HH

#include "G4VSensitiveDetector.hh"
#include "G4UserSteppingAction.hh"
#include "G4SystemOfUnits.hh"
#include "G4UserLimits.hh"

class MySensitiveDetector : public G4VSensitiveDetector{
    public:

        MySensitiveDetector(G4String);
        ~MySensitiveDetector();
        void SetThreshold(G4double threshold);
        G4double energyTotal;

    private:
        virtual G4bool ProcessHits(G4Step *, G4TouchableHistory *);
        G4int muonCount;
        G4double threshold;

};

#endif