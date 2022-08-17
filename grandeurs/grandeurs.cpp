#include "./grandeurs.hpp"

Grandeur::Grandeur(std::string type, float value)
{
    if (type == "masse") 
    {
        Grandeur::isMasse(value);
    } 
    else if (type == "temps") 
    {
        Grandeur::isTemps(value);
    } 
    else if (type == "distance") 
    {
        Grandeur::isDistance(value);
    } 
    else if (type == "charge") 
    {
        Grandeur::isCharge(value);
    }
    else if (type == "vitesse") 
    {
        Grandeur::isVitesse(value);
    }
    else if (type == "force") 
    {
        Grandeur::isForce(value);
    }
}

std::string * Grandeur::getGrandeur()
{
    return grandeurs;
}

void Grandeur::isMasse(float value) 
{
    grandeurs[0] = "masse";
    grandeurs[1] = "kg";
    grandeurs[2] = "kg";
    grandeurs[3] = value;
}

void Grandeur::isTemps(float value) 
{
    grandeurs[0] = "temps";
    grandeurs[1] = "s";
    grandeurs[2] = "s";
    grandeurs[3] = value;
}

void Grandeur::isDistance(float value) 
{
    grandeurs[0] = "distance";
    grandeurs[1] = "m";
    grandeurs[2] = "m";
    grandeurs[3] = value;
}

void Grandeur::isCharge(float value) 
{
    grandeurs[0] = "charge";
    grandeurs[1] = "C";
    grandeurs[2] = "C";
    grandeurs[3] = value;
}

void Grandeur::isVitesse(float value) 
{
    grandeurs[0] = "vitesse";
    grandeurs[1] = "v";
    grandeurs[2] = "m.s-1";
    grandeurs[3] = value;
}

void Grandeur::isForce(float value) 
{
    grandeurs[0] = "force";
    grandeurs[1] = "N";
    grandeurs[2] = "kg.m.s-2";
    grandeurs[3] = value;
}