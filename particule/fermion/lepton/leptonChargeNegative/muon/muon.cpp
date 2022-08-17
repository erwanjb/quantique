#include <math.h>
#include <stdexcept>
#include "./muon.hpp"

Muon::Muon()
: LeptonChargeNegative()
{   
    masse = 105,7 * pow(10, 6);
    charge = -1;
    spin = 1/2;
}