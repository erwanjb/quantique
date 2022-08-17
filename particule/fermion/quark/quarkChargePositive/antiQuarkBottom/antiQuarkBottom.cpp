#include <math.h>
#include <stdexcept>
#include "./antiQuarkBottom.hpp"

AntiQuarkBottom::AntiQuarkBottom()
: QuarkChargePositive()
{   
    masse = 4.2 * pow(10, 9);
    charge = 1/3;
    spin = 1/2;
}