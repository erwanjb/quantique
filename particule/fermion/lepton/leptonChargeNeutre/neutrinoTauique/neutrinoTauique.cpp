#include <math.h>
#include <stdexcept>
#include "./neutrinoTauique.hpp"

NeutrinoTauique::NeutrinoTauique()
: LeptonChargeNeutre()
{   
    masse = 15,5 * pow(10, 6);
    charge = 0;
    spin = 1/2;
}