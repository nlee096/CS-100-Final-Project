#ifndef __LOCKEDSTATE_HPP__
#define __LOCKEDSTATE_HPP__

#include "State.hpp"
#include <iostream>
//using namespace std;

class LockedState : public State{
	public:
		void Display(std::string itemName){
			std::cout << "\033[1;33m ** \033[0m" << itemName << "\033[1;33m ** \033[0m" << std::endl; 
		}
		bool getState(){
			return true;
		}
};
#endif //__LOCKEDSTATE_HPP
			
