#include <math.h>
#include <stdexcept>
#include "./quarkStrange.hpp"

QuarkStrange::QuarkStrange()
: QuarkChargeNegative()
{   
    masse = 104 * pow(10, 6);
    charge = -1/3;
    spin = 1/2;
}