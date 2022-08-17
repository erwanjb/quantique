#include <math.h>
#include <stdexcept>
#include "./positron.hpp"

Positron::Positron()
: LeptonChargePositive()
{   
    masse = 0,511 * pow(10, 6);
    charge = 1;
    spin = 1/2;
}