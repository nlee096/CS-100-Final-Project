#ifndef __HEAVYARMOR_HPP__
#define __HEAVYARMOR_HPP__

#include "Armors.hpp"
#include "UnlockedState.hpp"
#include "LockedState.hpp"
//using namespace std;
class HeavyArmor : public Armors {
public:
	HeavyArmor(int def, std::string name) {
		defense = def;
		attack = 0;
		this->name = name + " (HA)";
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
	std::string getName(){
		return name;
	}

};
#endif
