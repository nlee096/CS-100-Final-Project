#ifndef __MELEE_HPP__
#define __MELEE_HPP__

#include "Weapons.hpp"

class Melee : public Weapons {
	public:
        Melee(int atk, std::string name) {
            attack = atk;
            this->name = name + " (MW)";
            defense = 0;
            currentState = new UnlockedState();
        }
        void Favorite() {
			if(currentState->getState()) {
				return;
			}
			else {
				delete currentState;
				currentState = new LockedState();
			}
		}
        void Unfavorite() {
			if(currentState->getState()) {
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
	std::string getName(){
                return name;
        }
};


#endif
