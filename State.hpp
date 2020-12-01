#ifndef __STATE_HPP__
#define __STATE_HPP__
#include <string>

class State {
	public:
		//bool state
		virtual void Display(std::string itemName) = 0;
		virtual bool getState() = 0;
};
#endif //__STATE_HPP__
