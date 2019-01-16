#include <iostream>
#include "Sprite.h"

Sprite::Sprite(std::string desc, int att, int def)
    : description(desc), attackPoints(att), defencePoints(def)

{
    std::cout << description << " has been summoned!" << std::endl;
}

Sprite::Sprite()
{
    description = "General Sprite";
    attackPoints = 50;
    defencePoints = 50;
}

Sprite::~Sprite()
{
    std::cout << description << " has left the battlefield" << std::endl;
}

int Sprite::generalAttack()
{
    std::cout << description << " used general attack!" << std::endl;
    std::cout << "The enemy is dealt with " << attackPoints << " damage!" << std::endl;
    return attackPoints;
}

void Sprite::setAttackPoints(int number)
{
    attackPoints = number;
}

void Sprite::setDefencePoints(int number)
{
    defencePoints = number;
}

void Sprite::setDescription(std::string desc)
{
    description = desc;
}