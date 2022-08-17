#include <math.h>
#include <stdexcept>
#include "./quarkChargePositive.hpp"

QuarkChargePositive::QuarkChargePositive()
: Quark()
{   
    if (!(charge == 2/3 || charge == 1/3)) {
        throw std::invalid_argument("La charge " + std::to_string(charge) + " doit etre égale 2/3 ou 1/3");
    }
}