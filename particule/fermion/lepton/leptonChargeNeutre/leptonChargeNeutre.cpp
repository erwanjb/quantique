#include <math.h>
#include <stdexcept>
#include "./leptonChargeNeutre.hpp"

LeptonChargeNeutre::LeptonChargeNeutre()
: Lepton()
{   
    if (charge != 0)
    {   
        throw std::invalid_argument("La charge " + std::to_string(charge) + " doit être égale à 0");
    }
}