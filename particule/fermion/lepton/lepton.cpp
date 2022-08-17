#include <math.h>
#include <stdexcept>
#include "./lepton.hpp"

Lepton::Lepton()
: Fermion()
{   
    if (spin != 1/2)
    {   
        throw std::invalid_argument("Le spin " + std::to_string(spin) + " doit etre egale à 1/2 (0.5)");
    }
}