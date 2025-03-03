#ifndef CHARACTER_H
#define CHARACTER_H
class Character {
private:
    std::string name;
    int maxHealth;
    int health;
    int strength;
    int armor;
    int agility;
    int level;
    int kills;

    int attack(Character target);

    int defense(int damage);

    std::string toString();

    bool isAlive();

    void recover();

    void levepup();
};
#endif //CHARACTER_H
