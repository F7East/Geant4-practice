#include "generator.hh"

MyPrimaryGenerator :: MyPrimaryGenerator(){
    fParticleGun = new G4ParticleGun(1); // one primary particle per event is created
}

MyPrimaryGenerator :: ~MyPrimaryGenerator(){
    delete fParticleGun; //does not matter really
}

void MyPrimaryGenerator :: GeneratePrimaries(G4Event *anEvent) {

    G4ParticleTable *particleTable = G4ParticleTable :: GetParticleTable();

    // to get a proton 
    G4String particleName = "proton";
    G4ParticleDefinition *particle = particleTable->FindParticle("proton");
    
    // give the particle a position and a momentum in z direction
    G4ThreeVector pos(0., 0., 0.);
    G4ThreeVector mom(0., 0., 1.);

    // implement it

    fParticleGun -> SetParticlePosition(pos);
    fParticleGun -> SetParticleMomentumDirection(mom);
    fParticleGun -> SetParticleMomentum(100.*GeV);
    fParticleGun -> SetParticleDefinition(particle);

    fParticleGun -> GeneratePrimaryVertex(anEvent);
}