#include <math.h>
#include <stdexcept>
#include "./quarkCharm.hpp"

QuarkCharm::QuarkCharm()
: QuarkChargePositive()
{   
    masse = 1.27 * pow(10, 9);
    charge = 2/3;
    spin = 1/2;
}