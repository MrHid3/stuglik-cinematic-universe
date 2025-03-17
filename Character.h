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
public:
    int attack(Character target);

    int defense(int damage);

    std::string toString();

    void takeDamage(int damage);

    bool isAlive();

    void recover();

    void levepup();
};
#endif //CHARACTER_H
