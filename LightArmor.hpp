#ifndef __LIGHTARMOR_HPP__
#define __LIGHTARMOR_HPP__

#include "Armors.hpp"
#include "UnlockedState.hpp"
#include "LockedState.hpp"

using namespace std;
class LightArmor : public Armors{
    public:
    LightArmor(int def, string name) {
            defense = def;
            attack = 0;
            this->name = name;
            currentState = new UnlockedState();
        }
        void Favorite() {
            if (currentState->getState()) {
                return;
            }
            else {
                delete currentState;
                currentState = new LockedState();
            }
        }
        void Unfavorite() {
            if (currentState->getState()) {
                delete currentState;
                currentState = new UnlockedState();
            }
            else {
                return;
            }
        }
        void Display() {
            currentState->Display(this->name);
        }
        bool getState() {
            return currentState->getState();
        }
        int getAttack() {
           return this->attack;
        }
        int getDefense() {
            return this->defense;
        }

};

#endif
