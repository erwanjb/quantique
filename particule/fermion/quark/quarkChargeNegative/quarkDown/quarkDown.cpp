#include <math.h>
#include <stdexcept>
#include "./quarkDown.hpp"

QuarkDown::QuarkDown()
: QuarkChargeNegative()
{   
    masse = 4.8 * pow(10, 6);
    charge = -1/3;
    spin = 1/2;
}