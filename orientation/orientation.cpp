#include "./orientation.hpp"
#include <algorithm>

Orientation::Orientation(float tempsO, float positionXO, float positionYO, float positionZO, float rotationXO, float rotationYO, float rotationZO) :
temps(tempsO), positionX(positionXO), positionY(positionYO), positionZ(positionZO), rotationX(rotationXO), rotationY(rotationYO), rotationZ(rotationZO)
{
    float pushToHistory[7] = {tempsO, positionXO, positionYO, positionZO, rotationXO, rotationYO, rotationZO};
    history.push_back(pushToHistory);
}

void Orientation::setOrientation(float t, float xP, float yP, float zP, float xR, float yR, float zR)
{

    bool found = false;

    temps = t;
    positionX = xP;
    positionY = yP;
    positionZ = zP;
    rotationX = xR;
    rotationY = yR;
    rotationZ = zR;

    for (int i = 0; i < history.size(); i++)
    {
        if (history[i][0] == t)
        {
            found = true;
            history[i][1] = xP;
            history[i][2] = yP;
            history[i][3] = zP;
            history[i][4] = xR;
            history[i][5] = yR;
            history[i][6] = zR;
        }
    }
    if (found == false)
    {
        float pushToHistory[7] = {t, xP, yP, zP, xR, yR, zR};
        history.push_back(pushToHistory);
    }
}

int * Orientation::getOrientationNow()
{
    int orientation[7];
    
    orientation[0] = temps;
    orientation[1] = positionX;
    orientation[2] = positionY;
    orientation[3] = positionZ;
    orientation[4] = rotationX;
    orientation[5] = rotationY;
    orientation[6] = rotationZ;

    int * toReturn(orientation);
    return toReturn;
}

int * Orientation::getOrientation(float t)
{

    bool found = false;

    for (int i = 0; i < history.size(); i++)
    {
        if (history[i][0] == t)
        {
            int orientation[7];

            orientation[0] = history[i][0];
            orientation[1] = history[i][1];
            orientation[2] = history[i][2];
            orientation[3] = history[i][3];
            orientation[4] = history[i][4];
            orientation[5] = history[i][5];
            orientation[6] = history[i][6];

            int * toReturn(orientation);
            return toReturn;
        }
    }

    return nullptr;
}