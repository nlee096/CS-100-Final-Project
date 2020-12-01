#ifndef __WARRIOR_HPP__
#define __WARRIOR_HPP__

#include "UserClass.hpp"
#include "HeavyArmor.hpp"
#include "Melee.hpp"

class Warrior : public UserClass{
	public: 
		Weapons* AddWeapon(int attack, string weaponName){
			Weapons* meleeWeapon = new Melee(attack, weaponName);
			return meleeWeapon;
		}
		Armors* AddArmor(int defense, string armorName){
                        Armors* heavyArmor = new HeavyArmor(defense, armorName);
                        return heavyArmor;
                }
}; 
#endif //__WARRIOR_HPP__
