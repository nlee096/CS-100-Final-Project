#ifndef __UNLOCKEDSTATE_HPP__
#define __UNLOCKEDSTATE_HPP__

#include "State.hpp"
#include <iostream>
//using namespace std;

class UnlockedState : public State{
        public:
                void Display(std::string itemName){
                        std::cout << itemName << std::endl;
                }
                bool getState(){
                        return false;
                }
};
#endif //__UNLOCKEDSTATE_HPP

