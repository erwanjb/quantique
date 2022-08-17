#include <math.h>
#include <stdexcept>
#include "./boson.hpp"

Boson::Boson()
: Particule()
{   
    if (floorf(spin) != spin)
    {   
        throw std::invalid_argument("Le spin " + std::to_string(spin) + " doit etre un entier positif ou null.");
    }
}
