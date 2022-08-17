#pragma once

#include <iostream>
#include <string>
#include "../orientation/orientation.hpp"

class Repere
{
    public:

    Repere(const std::string typeR);

    std::string type;

    // vecteur de base

    float x;
    float y;
    float z;

    float angleXY;
    float angleYZ;
    float angleZX;

    Orientation origine;

    private:

    void isCartesien();
};