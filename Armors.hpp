#ifndef __ARMORS_HPP__
#define __ARMORS_HPP__

#include "State.hpp"
using namespace std;
class State;
class Armors {
protected:
    int attack;
    int defense;
    string name;
    State* currentState;
public:
    Armors() {};
    ~Armors(){
	delete currentState;
    }
    virtual void Favorite() = 0;
    virtual void Unfavorite() = 0;
    virtual void Display() = 0;
    virtual bool getState() = 0;
    virtual int getAttack() = 0;
    virtual int getDefense() = 0;
    virtual string getName() = 0;
};

#endif
