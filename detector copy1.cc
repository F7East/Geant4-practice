#include "Detector.hh"

#include "G4Step.hh"
#include "G4TouchableHistory.hh"
#include "G4Track.hh"

Detector::Detector(const G4String& name, const G4String& hitsCollectionName)
  : G4VSensitiveDetector(name)
{
  collectionName.insert(hitsCollectionName);
}

Detector::~Detector()
{}

void Detector::Initialize(G4HCofThisEvent* hce)
{
  hits = new G4THitsMap<G4double>(SensitiveDetectorName, collectionName[0]);
  G4int hcID = G4SDManager::GetSDMpointer()->GetCollectionID(collectionName[0]);
  hce->AddHitsCollection(hcID, hits);
}

G4bool Detector::ProcessHits(G4Step* step, G4TouchableHistory* history)
{
  G4double energyDeposit = step->GetTotalEnergyDeposit();
  G4Track* track = step->GetTrack();
  if (track->GetDefinition()->GetParticleName() == "mu-")
  {
    G4int id = step->GetPreStepPoint()->GetTouchableHandle()->GetCopyNumber();
    (*hits)[id] += energyDeposit;
  }

  G4cout << "Energy Deposit: " << energyDeposit << G4endl << "Number of muons: " << id << G4endl;

  return true;
}
