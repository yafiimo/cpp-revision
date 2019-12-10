#pragma once

#include "Sprite.h"
#include <string>

class Cyclops : 
    public Sprite 
{   
    private:
        int attackMultiplier;

    public:
        Cyclops(std::string desc, int att, int def, int attMultiplier);
        Cyclops();
};
