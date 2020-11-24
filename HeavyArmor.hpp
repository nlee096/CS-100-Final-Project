fndef __HEAVYARMOR_HPP__
#define __HEAVYARMOR_HPP__

#include "Armors.hpp"
using namespace std;
class HeavyArmor : public Armors {
Public:
	HeavyArmor(int def, string name) {
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
