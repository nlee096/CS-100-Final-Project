#ifndef __UNLOCKEDSTATE_HPP__
#define __UNLOCKEDSTATE_HPP__

#include "State.hpp"
#include <iostream>
using namespace std;

class UnlockedState : public State{
        public:
                void Display(string itemName{t
                        cout << itemName << endl;
                }
                bool getState(){
                        return true;
                }
};
#endif //__UNLOCKEDSTATE_HPP

