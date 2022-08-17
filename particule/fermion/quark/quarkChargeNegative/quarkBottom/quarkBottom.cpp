#include <math.h>
#include <stdexcept>
#include "./quarkBottom.hpp"

QuarkBottom::QuarkBottom()
: QuarkChargeNegative()
{   
    masse = 4.2 * pow(10, 9);
    charge = -1/3;
    spin = 1/2;
}