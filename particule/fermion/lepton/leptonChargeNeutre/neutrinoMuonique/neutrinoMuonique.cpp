#include <math.h>
#include <stdexcept>
#include "./neutrinoMuonique.hpp"

NeutrinoMuonique::NeutrinoMuonique()
: LeptonChargeNeutre()
{   
    masse = 0,17 * pow(10, 6);
    charge = 0;
    spin = 1/2;
}