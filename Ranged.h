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
        void Favorite();
        void Unfavorite();
        void Display();
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
