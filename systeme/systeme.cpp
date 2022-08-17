#include "./systeme.hpp"

Systeme::Systeme(const std::string typeR) : repere(Repere(typeR))
{
    origineTemps = 0;
}