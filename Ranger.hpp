#ifndef __RANGER_HPP__
#define __RANGER_HPP__

#include "UserClass.hpp"
#include "LightAmor.hpp"
#include "Ranged.hpp"

class Ranger : public UserClass{
	public: 
		Weapons* AddWeapon(int attack, string weaponName){
			Weapons rangedWeapon = new Ranged(attack, weaponName);
			return rangedWeapon;
		}
		Armors* AddArmor(int defense, string armorName){
                        Armors lightArmor = new LightArmor(defense, armorName);
                        return lightArmor;
                }
}; 
#endif //__RANGER_HPP__		
