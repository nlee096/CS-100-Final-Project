#ifndef __RANGED_H__
#define __RANGED_H__

#include "Weapons.h"
using namespace std;
Class Ranged : public Weapons {
    Public:
        Ranged(int atk, string name) {
            attack = atk;
            this->name = name;
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
 
 };
 
 #endif
