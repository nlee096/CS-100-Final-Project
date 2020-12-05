#ifndef __HIGHEST_ATTACK__
#define __HIGHEST_ATTACK__

#include "ItemOrder.hpp"

using namespace std;

class HighestAttack : public ItemOrder {
	public:
		void Display(vector<Weapons*> Weap, vector<Armors*> Arm) {
			//Sort the weapons by highest attack
			int min;
			for(unsigned int i = 0; i < Weap.size() - 1; i++) {
				min = Weap.at[i];
				for(unsigned int j = i+1; j < Weap.size(); j++) {
					if(Weap.at[j]->getAttack() < Weap.at[min]->getAttack()) {
						min = j;
					}
				}
				int temp = Weap.at[j];
				Weap.at[j] = Weap.at[min];
				Weap.at[min] = temp;
			}
			//Print out the weapons
			cout << "Weapons: " << endl;
			for(unsigned int k = 0; k < Weap.size() - 1; k++) {
				cout << Weap.at[k]->Display() << "\033[1;31m ATK \033[0m" << ": " << Weap.at[k]->getAttack() <<  "\033[1;32m DEF \033[0m" << ": " << Weap.at[k]->getDefense() << endl;
			}
			//Print out the armor
			for(unsigned int n = 0; n < Arm.size() - 1; n++) {
				cout << Arm.at[n]->Display() << "\033[1;31m ATK \033[0m" << ": " << Arm.at[n]->getAttack() << "\033[1;32m DEF \033[0m" << ": " << Arm.at[n]->getDefense() << endl;
			}
		}
};

#endif
