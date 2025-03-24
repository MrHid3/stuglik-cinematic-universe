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

    void levelup();

    int getHealth();

    static Character* fight(Character* one, Character* two) {
        bool which = 0;
        while (one->isAlive() && two->isAlive()) {
             if (which)
                 one->attack(*two);
             else
                 two->attack(*one);
             which = !which;
        }
        if (one->isAlive())
            return one;
        else
            return two;
    }
};
#endif //CHARACTER_H
