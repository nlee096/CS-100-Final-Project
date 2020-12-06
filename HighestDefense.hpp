#ifndef __HIGHEST_DEFENSE__
#define __HIGHEST_DEFENSE__

#include "ItemOrder.hpp"
#include <iostream>
using namespace std;

class HighestDefense : public ItemOrder {
    public:
        void Display(const vector<Weapons*> &Weap, const vector<Armors*> &Arm) {
            /*Sort the armor by highest attack*/
	vector<Armors*> armtemp;
		for(unsigned int w = 0; w < Arm.size(); w++){
                     armtemp.push_back(Arm.at(w));
              	}	
         
	    unsigned int j;
		if(Arm.size() == 0) {

		}
		else if(Arm.size() != 1){	
       		 for(unsigned int i = 0; i < armtemp.size() - 1; i++) {
        		for(j = 0; j < armtemp.size() - i - 1; j++) {
            			if(armtemp.at(j)->getDefense() < armtemp.at(j+1)->getDefense()) {

                			Armors* temp = armtemp.at(j);
                			armtemp.at(j) = armtemp.at(j+1);
                			armtemp.at(j+1) = temp;
            			}
        		}
		} 
	   }
	/*Print out the armor*/
	vector<Weapons*> temp1;
	vector<Armors*> temp2;
                                /*Weapons Vector*/
                                for(unsigned int x = 0; x < Weap.size() ; x++){
                                        if(Weap.at(x)->getState() == true){
                                                temp1.push_back(Weap.at(x));
                                        }
                                }
                                for(unsigned int y = 0; y < Weap.size() ; y++){
                                        if(Weap.at(y)->getState() == false){
                                                temp1.push_back(Weap.at(y));
                                        }
                                }
			if(Arm.size() >= 1){
                                /*Armors Vector*/
                                for(unsigned int a = 0; a < Arm.size() ; a++){
                                        if(armtemp.at(a)->getState() == true){
                                                temp2.push_back(armtemp.at(a));
                                        }
                                }
                                for(unsigned int b = 0; b < Arm.size() ; b++){
                                        if(armtemp.at(b)->getState() == false){
                                                temp2.push_back(armtemp.at(b));
                                        }
                                }
                        }

			cout << endl << "Armors: " << endl;
            for(unsigned int k = 0; k < temp2.size() ; k++) {
			   temp2.at(k)->Display();
		cout << "\033[1;31m ATK \033[0m" << " : " << temp2.at(k)->getAttack() << " " <<  "\033[1;32m DEF \033[0m" << " : " << temp2.at(k)->getDefense() << " " << endl;
            }
            /*Print out the weapon*/
			cout << "Weapons: " << endl;
            for(unsigned int n = 0; n < temp1.size() ; n++) {
             	temp1.at(n)->Display();
		cout << "\033[1;31m ATK \033[0m" << " : " << temp1.at(n)->getAttack() << " " << "\033[1;32m DEF \033[0m" << " : " << temp1.at(n)->getDefense() << " " << endl;

            }
	}
	

};

#endif
