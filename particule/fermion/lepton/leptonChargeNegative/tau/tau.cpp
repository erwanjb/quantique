#include <math.h>
#include <stdexcept>
#include "./tau.hpp"

Tau::Tau()
: LeptonChargeNegative()
{   
    masse = 1,777 * pow(10, 9);
    charge = -1;
    spin = 1/2;
}