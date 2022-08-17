#include <math.h>
#include <stdexcept>
#include "./antiTau.hpp"

AntiTau::AntiTau()
: LeptonChargePositive()
{   
    masse = 1,777 * pow(10, 9);
    charge = 1;
    spin = 1/2;
}