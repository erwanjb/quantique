#define _USE_MATH_DEFINES

#include "./repere.hpp"
#include <iostream>
#include <string>
#include <math.h>


Repere::Repere(std::string typeR) : type(typeR), origine(0, 0, 0, 0, 0, 0)
{
    if (type == "cartesien") 
    {
        Repere::isCartesien();
    }
}

void Repere::isCartesien()
{
    // vecteurs du repère
    // norme euclidienne
    x = 1;
    y = 1;
    z = 1;

    // cartesien

    angleXY = 90 * (M_PI) / 180;
    angleYZ = 90 * (M_PI) / 180;
    angleZX = 90 * (M_PI) / 180;
}