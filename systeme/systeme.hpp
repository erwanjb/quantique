#pragma once

#include <iostream>
#include <string>

#include "../repere/repere.hpp"

class Systeme
{
    public:

    Systeme(const std::string typeR);

    Repere repere;

    float temps;

    float origineTemps;
};