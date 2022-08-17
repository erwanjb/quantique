#include <math.h>
#include <stdexcept>
#include "./antiQuarkUp.hpp"

AntiQuarkUp::AntiQuarkUp()
: QuarkChargeNegative()
{   
    masse = 2.4 * pow(10, 6);
    charge = -2/3;
    spin = 1/2;
}