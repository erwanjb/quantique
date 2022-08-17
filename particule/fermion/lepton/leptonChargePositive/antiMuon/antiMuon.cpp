#include <math.h>
#include <stdexcept>
#include "./antiMuon.hpp"

AntiMuon::AntiMuon()
: LeptonChargePositive()
{   
    masse = 105,7 * pow(10, 6);
    charge = 1;
    spin = 1/2;
}