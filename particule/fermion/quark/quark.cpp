#include <math.h>
#include <stdexcept>
#include "./quark.hpp"

Quark::Quark()
: Fermion()
{   
    if (spin != 1/2)
    {   
        throw std::invalid_argument("Le spin " + std::to_string(spin) + " doit etre egale à 1/2 (0.5)");
    }

    if (charge != 2/3 && charge != -1/3) {
        throw std::invalid_argument("La charge " + std::to_string(charge) + " doit etre égale à 2/3 ou -1/3");
    }
}