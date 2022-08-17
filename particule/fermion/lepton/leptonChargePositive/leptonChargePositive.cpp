#include <math.h>
#include <stdexcept>
#include "./leptonChargePositive.hpp"

LeptonChargePositive::LeptonChargePositive()
: Lepton()
{   
    if (charge != 1)
    {   
        throw std::invalid_argument("La charge " + std::to_string(charge) + " doit être égale à 1");
    }
}