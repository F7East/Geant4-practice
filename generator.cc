#include "generator.hh"

MyPrimaryGenerator :: MyPrimaryGenerator(){
    fParticleGun = new G4ParticleGun(1); // one primary particle per event is created
}

MyPrimaryGenerator :: ~MyPrimaryGenerator(){
    delete fParticleGun; //does not matter really
}

void MyPrimaryGenerator :: GeneratePrimaries(G4Event *anEvent) {

    G4ParticleTable *particleTable = G4ParticleTable :: GetParticleTable();

    // get muon
    G4String particleName = "mu-";
    G4ParticleDefinition *particle = particleTable->FindParticle("mu-");
    
    // give the particle a position and a momentum in z direction
    G4ThreeVector pos(0., 0., -0.9*m);
    G4ThreeVector mom(0., 0., 1.);

    // implement it

    /*
     Muons are indeed the most numerous energetic charged particles at sea level. 
     They arrive at sea level with an average flux of about 1 muon per square centimeter and per minute. 
     Their mean energy at sea level is 4 GeV.
     source: https://doi.org/10.1016/j.nima.2018.06.038
    */

    fParticleGun -> SetParticlePosition(pos);
    fParticleGun -> SetParticleMomentumDirection(mom);
    fParticleGun -> SetParticleMomentum(4.*GeV);
    fParticleGun -> SetParticleDefinition(particle);

    fParticleGun -> GeneratePrimaryVertex(anEvent);
}