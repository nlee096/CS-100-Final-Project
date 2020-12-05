#ifndef __HIGHEST_DEFENSE__
#define __HIGHEST_DEFENSE__

#include "ItemOrder.hpp"
#include <iostream>
using namespace std;

class HighestDefense : public ItemOrder {
    public:
        void Display(vector<Weapons*> Weap, vector<Armors*> Arm) {
            /*Sort the armor by highest attack*/
            int min;
	    unsigned int j;
	if(Arm.size() != 0){	
       		 for(unsigned int i = 0; i < Arm.size() - 1; i++) {
        		for(j = 0; j < Arm.size() - i - 1; j++) {
            			if(Arm.at(j) < Arm.at(j+1)) {
                			Armors* temp = Arm.at(j);
                			Arm.at(j) = Arm.at(j+1);
                			Arm.at(j+1) = temp;
            			}
        		}
		} 
	   
	/*Print out the armor*/
            for(unsigned int k = 0; k < Weap.size() - 1; k++) {
                Arm.at(k)->Display();
		cout  << "\033(1;31m ATK \033(0m" << " : " << Arm.at(k)->getAttack() <<  "\033(1;32m DEF \033(0m" << " : " << Arm.at(k)->getDefense() << endl;
            }
            /*Print out the weapon*/
            for(unsigned int n = 0; n < Arm.size() - 1; n++) {
                Weap.at(n)->Display();
		cout << "\033(1;31m ATK \033(0m" << " : " << Weap.at(n)->getAttack() << "\033(1;32m DEF \033(0m" << " : " << Weap.at(n)->getDefense() << endl;
            }
	}
	}

};

#endif

