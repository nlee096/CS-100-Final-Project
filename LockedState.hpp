#ifndef __LOCKEDSTATE_HPP__
#define __LOCKEDSTATE_HPP__

#include "State.hpp"
#include <iostream>
using namespace std;

class LockedState : public State{
	public:
		void Display(string itemName{t
			cout << "\033[1;33m ** \033[0m" << itemName << "\033[1;33m ** \033[0m" << endl; 
		}
		bool getState(){
			return true;
		}
};
#endif //__LOCKEDSTATE_HPP
			
