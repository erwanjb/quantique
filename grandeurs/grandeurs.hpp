#include <iostream>
#include <string>
#include <vector>

class Grandeur
{
    public:

    Grandeur(std::string type, float value);
    std::string grandeurs[4];

    std::string * getGrandeur();

    private:
    void isMasse(float value);
    void isTemps(float value);
    void isDistance(float value);
    void isCharge(float value);
    void isVitesse(float value);
    void isForce(float value);
};

