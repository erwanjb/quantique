#include <iostream>
#include <string>
#include "./particule/particule.hpp"
#include "./fermion/fermion.hpp"
#include "./boson/boson.hpp"

int main()
{
    Fermion particule1(1.5, 1.3, 2);
    Boson particule2(1, 1.3, 2);
    Particule particule3(1.5, 1.3, 2);
    Particule particule4(1, 1.3, 2);
    return 0;
}