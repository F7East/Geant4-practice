#include "RunAction.hh"

RunAction::RunAction(MySensitiveDetector* detector) : detector(detector)
{
}

RunAction::~RunAction()
{
}

void RunAction ::BeginOfRunAction(const G4Run* run)
{}

void RunAction::EndOfRunAction(const G4Run* run)
{
  // Output the total energy deposited by the muon
  G4cout << "Total energy deposited by muon: " << detector->energyTotal << " MeV" << G4endl;
}