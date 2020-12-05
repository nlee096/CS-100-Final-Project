#ifndef __ITEM_ORDER__
#define __ITEM_ORDER__

#include <vector>
#include "Weapons.hpp"
#include "Armors.hpp"

using namespace std;

class ItemOrder {	
	public:
		virtual void Display(vector<Weapons*>, vector<Armors*>) = 0;
};

#endif
