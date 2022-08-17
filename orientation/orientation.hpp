#pragma once

#include <iostream>
#include <string>
#include "../repere/repere.hpp"
#include <vector>

class Orientation
{
    public:
    Orientation(float tempsO, float positionXO, float positionYO, float positionZO, float rotationXO, float rotationYO, float rotationZO);
    float positionX;
    float positionY;
    float positionZ;
    float rotationX;
    float rotationY;
    float rotationZ;
    float temps;

    std::vector <float[7]> history;

    void setOrientation(float t, float xP, float yP, float zP, float xR, float yR, float zR);

    int * getOrientationNow();

    int * getOrientation(float t);
};