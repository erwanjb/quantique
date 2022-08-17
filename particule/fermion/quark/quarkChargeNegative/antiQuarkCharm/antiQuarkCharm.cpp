#include <math.h>
#include <stdexcept>
#include "./antiQuarkCharm.hpp"

AntiQuarkCharm::AntiQuarkCharm()
: QuarkChargeNegative()
{   
    masse = 1.27 * pow(10, 9);
    charge = -2/3;
    spin = 1/2;
}