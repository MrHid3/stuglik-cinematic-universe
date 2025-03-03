#ifndef MONSTER_H
#define MONSTER_H
#include "Character.h"
class Monster : Character {
private:
    std::string name;
    int maxHealth = 1;
    int health;
    int strength;
    int armor;
    int agility;
    int level;
    int kills;
public:
    Monster() {
        this->name = "Loremus Ipsumus";
        this->maxHealth = 1;
        this->health = 1;
        this->strength = 1;
        this->armor = 1;
        this->agility = 1;
        this->level = 1;
    }

    Monster(std::string name, int health, int strength, int armor, int agility, int level) {
        this->name = name;
        this->health = health;
        this->strength = strength;
        this->armor = armor;
        this->agility = agility;
        this->level = level;
    }

    std::string print() {
        return
        "Name: " + this->name + "\n" +
        "Health: " + std::to_string(this->health) + "\n" +
        "Strength: " + std::to_string(this->strength) + "\n" +
        "Armor: " + std::to_string(this->armor) + "\n" +
        "Agility: " + std::to_string(this->agility) + "\n" +
        "Level: " + std::to_string(this->level) + "\n";
    }

    bool isAlive() {
        return this->health > 0;
    }

    bool takeDamage(){
        if (this->armor > 0){
            this->health -= 1;
            return 1;
        }else {
            return 0;
        }
    }

    bool levepup(){
        this->level =+ 1;
        return 1;
    }
};

#endif //MONSTER_H
