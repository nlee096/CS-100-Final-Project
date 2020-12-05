#ifndef __HIGHEST_ATTACK__
#define __HIGHEST_ATTACK__
#include <iostream>
#include "ItemOrder.hpp"

using namespace std;

class HighestAttack : public ItemOrder {
	public:
		void Display(vector<Weapons*> Weap, vector<Armors*> Arm) {
			//Sort the weapons by highest attack

			unsigned int j;
			if(Weap.size() == 0) {
				cout << endl << "Weapons: " << endl;
				cout << "Armors: " << endl;
			}
			else {
				for(unsigned int i = 0; i < Weap.size() - 1; i++) {
 				       for(j = 0; j < Weap.size() - i - 1; j++) {
						
           					 if(Weap.at(j)->getAttack() < Weap.at(j+1)->getAttack()) {

               						Weapons* temp = Weap.at(j);
                					Weap.at(j) = Weap.at(j+1);
                					Weap.at(j+1) = temp;
            				 	}	

						}
        		}
				
			//Print out the weapons
			cout << endl << "Weapons: " << endl;
			for(unsigned int k = 0; k < Weap.size() ; k++) {
				Weap.at(k)->Display();
				cout << "\033[1;31m ATK \033[0m" << " : " << Weap.at(k)->getAttack() << " " <<  "\033[1;32m DEF \033[0m" << " : " << Weap.at(k)->getDefense() << " " << endl;
			}
			//Print out the armor
			cout << "Armors: " << endl;
			for(unsigned int n = 0; n < Arm.size() ; n++) {
				Arm.at(n)->Display();
				cout << "\033[1;31m ATK \033[0m" << " : " << Arm.at(n)->getAttack() << " " << "\033[1;32m DEF \033[0m" << " : " << Arm.at(n)->getDefense() << " " << endl;

			}
			} 
		}
};

#endif
