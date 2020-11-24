#ifndef __ARMORS_HPP__
#define __ARMORS_HPP__

#include "State.hpp"

using namespace std;
class State;
class Armors {
Private:
    int defense;
    string name;
    State* currentState;
Public:
    Armors() {};
    virtual void Favorite() = 0;
    virtual void Unfavorite() = 0;
    virtual void Display() = 0;
    virtual bool getState() = 0;
    virtual int getDefense() = 0;

};

#endif
