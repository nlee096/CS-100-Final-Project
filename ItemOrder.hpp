#ifndef __ITEM_ORDER__
#define __ITEM_ORDER__

#include <vector>

using namespace std;

class ItemOrder {	
	public:
		virtual void Display(vector<Weapons*>, vector<Armors*>) = 0;
};

#endif
