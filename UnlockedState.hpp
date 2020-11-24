#ifndef __UNLOCKEDSTATE_HPP__
#define __UNLOCKEDSTATE_HPP__

#include "State.hpp"
#include <iostream>
using namespace std;

class UnlockedState : public State{
        public:
                void Display(string itemName){
                        cout << itemName << endl;
                }
                bool getState(){
                        return false;
                }
};
#endif //__UNLOCKEDSTATE_HPP

