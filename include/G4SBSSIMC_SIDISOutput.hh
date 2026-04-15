#ifndef G4SBSSIMC_SIDISOutput_h
#define G4SBSSIMC_SIDISOutput_h 1

#include <vector>
using namespace std;

class G4SBSSIMC_SIDISOutput {
public:
  G4SBSSIMC_SIDISOutput();
  ~G4SBSSIMC_SIDISOutput();
  void Clear();
  void ConvertToTreeUnits();
  void ConvertToGeantUnits();

  int PDG_ID; // PDG ID of SIDIS hadron

  double sigma, Weight;
  double Q2; //negative of virtual photon invariant mass:
  double xbj; //Usual Bjorken x variable;
  double nu; //electron energy loss in lab frame
  double W; //photon-nucleon invariant mass.
  double epsilon; //virtual photon longitudinal polarization

  double Ebeam;
  double p_e, theta_e, phi_e, px_e, py_e, pz_e;
  double p_n, theta_n, phi_n, px_n, py_n, pz_n;
  double vx, vy, vz;
  double veE, vetheta; //scattered e- kinematics at vertex
};

#endif
