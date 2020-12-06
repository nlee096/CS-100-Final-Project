#ifndef __HIGHEST_ATTACK__
#define __HIGHEST_ATTACK__
#include <iostream>
#include "ItemOrder.hpp"

using namespace std;

class HighestAttack : public ItemOrder {
	public:
		void Display(const vector<Weapons*> &Weap, const vector<Armors*> &Arm) {
			/*Sort the weapons by highest attack*/
			vector<Weapons*> weaptemp;
			for(unsigned int w = 0; w < Weap.size(); w++){
				weaptemp.push_back(Weap.at(w));
			}
				
			unsigned int j;
			if(Weap.size() == 0) {

			}
			else if(Weap.size() != 1) {
				for(unsigned int i = 0; i < weaptemp.size() - 1; i++) {
 				    for(j = 0; j < weaptemp.size() - i - 1; j++) {
        				if(weaptemp.at(j)->getAttack() < weaptemp.at(j+1)->getAttack()) {
               				Weapons* temp = weaptemp.at(j);
                			weaptemp.at(j) = weaptemp.at(j+1);
                			weaptemp.at(j+1) = temp;
           			 	}	
					}
        		}
			}
			/*Copy vector with Favorites in front*/
			 vector<Weapons*> temp1;
			vector<Armors*> temp2;
			if(Weap.size() >= 1){
				/*Weapons Vector*/
				for(unsigned int x = 0; x < weaptemp.size() ; x++){
					if(weaptemp.at(x)->getState() == true){
						temp1.push_back(weaptemp.at(x));
					}
				}
				for(unsigned int y = 0; y < weaptemp.size() ; y++){
					if(weaptemp.at(y)->getState() == false){
						temp1.push_back(weaptemp.at(y));
					}
				}
			}
				/*Armors Vector*/
				for(unsigned int a = 0; a < Arm.size() ; a++){
					if(Arm.at(a)->getState() == true){
						temp2.push_back(Arm.at(a));
					}
				}
				for(unsigned int b = 0; b < Arm.size() ; b++){
					if(Arm.at(b)->getState() == false){
						temp2.push_back(Arm.at(b));
					}
				}

			/*Print out the weapons*/
			cout << endl << "Weapons: " << endl;
			for(unsigned int k = 0; k < temp1.size() ; k++) {
				temp1.at(k)->Display();
				cout << "\033[1;31m ATK \033[0m" << " : " << temp1.at(k)->getAttack() << " " <<  "\033[1;32m DEF \033[0m" << " : " << temp1.at(k)->getDefense() << " " << endl;
			}
			/*Print out the armor*/
			cout << "Armors: " << endl;
			for(unsigned int n = 0; n < temp2.size() ; n++) {
				temp2.at(n)->Display();
				cout << "\033[1;31m ATK \033[0m" << " : " << temp2.at(n)->getAttack() << " " << "\033[1;32m DEF \033[0m" << " : " << temp2.at(n)->getDefense() << " " << endl;

			}
			
		}
};

#endif
