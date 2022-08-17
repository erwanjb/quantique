#include <math.h>
#include <stdexcept>
#include "./quarkChargeNegative.hpp"

QuarkChargeNegative::QuarkChargeNegative()
: Quark()
{   
    if (!(charge == -1/3 || charge == -2/3)) {
        throw std::invalid_argument("La charge " + std::to_string(charge) + " doit etre égale -1/3 ou -2/3");
    }
}