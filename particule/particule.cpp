#include <math.h>
#include <stdexcept>
#include "./particule.hpp"

Particule::Particule()
{   
    if (spin < 0 || !(floorf(spin) == spin || floorf(spin) + 0.5 == spin))
    {   
        throw std::invalid_argument("Le spin " + std::to_string(spin) + " doit etre un entier ou demi entier positif ou null.");
    }

    if (masse < 0)
    {   
        throw std::invalid_argument("La masse " + std::to_string(masse) + " doit etre un nombre positif ou null.");
    }
}

