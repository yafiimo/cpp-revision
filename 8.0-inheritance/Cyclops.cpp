#include <iostream>
#include "Cyclops.h"

Cyclops::Cyclops(std::string desc, int att, int def, int attMultiplier)
    : 
    Sprite(desc, att, def),
    attackMultiplier(attMultiplier)
{

}

Cyclops::Cyclops()
{
    /*
        Inherited class cannot access private members of parents class. 
        Instead can use setters in parent class or change to protected.
    */

    setDescription("Cyclops");
    setAttackPoints(80);
    setDefencePoints(80);
    attackMultiplier = 1.5;

    std::cout << "Cyclops has been summoned!" << std::endl;

}