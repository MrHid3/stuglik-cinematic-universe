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

    int getHealth() {
        return this->health;
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

    void attack(Character target) {
        target.takeDamage(std::ceil(
                this->strength *
                (this->health < std::ceil(this->maxHealth*0.50)? 1.2: 1)));
    }

    void takeDamage(int damage){
        this->health -= damage - armor;
    }

    void levelup(){
        this->level =+ 1;
        this->maxHealth = this->maxHealth + 1;
        this->health = std::floor(this->maxHealth * 0.75);
        this->strength = this->strength + 1;
        this->armor = this->armor + 1;
        this->agility = this->agility + 1;
    }
};

#endif //MONSTER_H
