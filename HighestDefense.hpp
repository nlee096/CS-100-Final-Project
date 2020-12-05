#ifndef __HIGHEST_DEFENSE__
#define __HIGHEST_DEFENSE__

#include "ItemOrder.hpp"

using namespace std;

class HighestAttack : public ItemOrder {
    public:
        void Display(vector<Weapons*> Weap, vector<Armors*> Arm) {
            //Sort the armor by highest attack
            int min;
            for(unsigned int i = 0; i < Arm.size() - 1; i++) {
                min = Arm.at[i];
                for(unsigned int j = i+1; j < Arm.size(); j++) {
                    if(Arm.at[j]->getDefense() < Arm.at[min]->getDefense()) {
                        min = j;
                    }
                }
                Armors* temp = Arm.at[j];
                Arm.at[j] = Arm.at[min];
                Arm.at[min] = temp;
            }
            //Print out the armor
            for(unsigned int k = 0; k < Weap.size() - 1; k++) {
                cout << Arm.at[k]->Display() << "\033[1;31m ATK \033[0m" << " : " << Arm.at[k]->getAttack() <<  "\033[1;32m DEF \033[0m" << " : " << Arm.at[k]->getDefense() << endl;
            }
            //Print out the weapon
            for(unsigned int n = 0; n < Arm.size() - 1; n++) {
                cout << Weap.at[n]->Display() << "\033[1;31m ATK \033[0m" << " : " << Weap.at[n]->getAttack() << "\033[1;32m DEF \033[0m" << " : " << Weap.at[n]->getDefense() << endl;
            }

};

#endif

