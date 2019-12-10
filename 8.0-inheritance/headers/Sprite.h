#pragma once

/* 
    instead of pragma once, can alternatively use preprocessor:
        ifndef SPRITE_H
        define SPRITE_H

        endif
    to prevent multiple declaration
*/

#include <string>

class Sprite 
{
    private:
        std::string description;
        int attackPoints;
        int defencePoints;

    public:
        Sprite(std::string desc, int att, int def);
        Sprite();
        ~Sprite();
        int generalAttack();

        void setAttackPoints(int number);
        void setDefencePoints(int number);
        void setDescription(std::string desc);
};
