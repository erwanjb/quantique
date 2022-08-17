#include <math.h>
#include <stdexcept>
#include "./neutrinoElectrique.hpp"

NeutrinoElectrique::NeutrinoElectrique()
: LeptonChargeNeutre()
{   
    masse = 2,2;
    charge = 0;
    spin = 1/2;
}