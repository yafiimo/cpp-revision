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
        Inherited class constructors cannot access private members of parents without
        explicitly making this possible. Instead can use setters in parent class.
    */

    setDescription("Cyclops");
    setAttackPoints(80);
    setDefencePoints(80);
    attackMultiplier = 1.5;

    std::cout << "Cyclops has been summoned!" << std::endl;

}