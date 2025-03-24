#ifndef ARENA_H
#define ARENA_H
#include <vector>
#include "Character.h"


class Arena {
    public:
    std::vector<Character*> fighters;
    struct results {
        std::vector<std::vector<Character*>> matches;
        std::vector<Character*> winner;
        std::vector<int> winnerHp;
    };
    results results;

    Arena(std::vector<Character*> fighters) {
        this->fighters = fighters;
        resuls results;
        doZeThing();
    }

    doZeThing() {
        while (this->fighters.size() > 1) {
            this->results.matches.push_back({fighters[fighters.size() - 1], fighters[fighters.size() - 2]});
            Character* winner = Character::fight(fighters[fighters.size() - 1], fighters[fighters.size() - 2]);
            if (winner == fighters[fighters.size() - 1]) {
                fighters.erase(fighters.end() - 2);
            }else{
                fighters.pop_back();
            }
                this->results.winner.push_back(winner);
            this->results.winnerHp.push_back(winner->getHealth());
        }
    }
};

#endif //ARENA_H
