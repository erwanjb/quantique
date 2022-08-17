#include <math.h>
#include <stdexcept>
#include "./antiQuarkDown.hpp"

AntiQuarkDown::AntiQuarkDown()
: QuarkChargePositive()
{   
    masse = 4.8 * pow(10, 6);
    charge = 1/3;
    spin = 1/2;
}