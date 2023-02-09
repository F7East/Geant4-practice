#ifndef RunAction_hh
#define RunAction_hh

#include "G4UserRunAction.hh"
#include "G4Run.hh"
#include "G4UImanager.hh"
#include "G4ios.hh"
#include "detector.hh"


class RunAction : public G4UserRunAction
{
public:
  RunAction(MySensitiveDetector* detector);
  virtual ~RunAction();

  virtual void BeginOfRunAction(const G4Run* run);
  virtual void EndOfRunAction(const G4Run* run);

private:
  MySensitiveDetector* detector;
};


#endif