#ifndef __USERCLASS_HPP__
#define __USERCLASS_HPP__

//#include "Weapons.hpp"
//#include "Armors.hpp"

class UserClass {
	public:
		//int stat;
		//string itemName
		//contructors
		UserClass(){}
		//UserClass(int ADstat, string name) : stat(ADstat), itemName(name){}
		//Interface will be calling the functions below: 
		//Ex UserClass* myClass = new Ranger();
		//myClass -> AddWeapon(10, "bow"); 
		
		//functions
		virtual Weapons* AddWeapon(int attack, string weponName) = 0;
		virtual Armors* AddAmor(int defense, string armorName) =0;
};

#endif 	//__USERCLASS_HPP__
