#include <math.h>
#include <stdexcept>
#include "./fermion.hpp"

Fermion::Fermion()
: Particule()
{   
    if (floorf(spin) + 0.5 != spin)
    {   
        throw std::invalid_argument("Le spin " + std::to_string(spin) + " doit etre un demi entier positif.");
    }
}
