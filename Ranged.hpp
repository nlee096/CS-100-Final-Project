#ifndef __RANGED_HPP__
#define __RANGED_HPP__

#include "Weapons.hpp"
#include "UnlockedState.hpp"
#include "LockedState.hpp"
//using namespace std;
class Ranged : public Weapons {
    public:
        Ranged(int atk, std::string name) {
            attack = atk;
            this->name = name + " (RW)";
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
