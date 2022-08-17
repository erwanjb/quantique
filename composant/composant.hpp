#pragma once

#include <iostream>
#include <string>

#include "../orientation/orientation.hpp"

class Composant
{
    public:

    Composant(const Orientation &orientationC, const float &masseC, const float &chargeC);

    Orientation orientation;

    float masse;

    float charge;

};