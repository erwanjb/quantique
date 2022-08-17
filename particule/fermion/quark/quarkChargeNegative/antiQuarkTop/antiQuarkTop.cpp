#include <math.h>
#include <stdexcept>
#include "./AntiQuarkTop.hpp"

AntiQuarkTop::AntiQuarkTop()
: QuarkChargeNegative()
{   
    masse = 171.2 * pow(10, 6);
    charge = -2/3;
    spin = 1/2;
}