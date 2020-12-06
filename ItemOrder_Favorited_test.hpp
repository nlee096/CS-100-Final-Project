#ifndef __ITEMORDER_FAVORITED_TESTS_HPP__
#define __ITEMORDER_FAVORITED_TESTS_HPP__
#include "gtest/gtest.h"
/*#include <iostream>*/
#include <vector>

//#include "ItemOrder.hpp"
#include "HighestAttack.hpp"
#include "HighestDefense.hpp"
#include "UnlockedState.hpp"
#include "LockedState.hpp"

#include "Weapons.hpp"
#include "Melee.hpp"
#include "Ranged.hpp"

#include "Armors.hpp"
#include "LightArmor.hpp"
#include "HeavyArmor.hpp"

/*using namespace std;*/

TEST(ItemOrderSet, OneFavWeaponMelee){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	attac.push_back(new Melee(10, "Steel Spear"));
	attac.front() -> Favorite();

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Steel Spear" << "\033[1;33m ** \033[0m" << " "  
		 << "\033[1;31m ATK \033[0m" << " : 10 "
		 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Armors : " << std::endl;

	std::cout << "ACTUAL : ";
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "Weapons : " << std::endl;
	     std::cout << "\033[1;33m ** \033[0m" << "Steel Spear" << "\033[1;33m ** \033[0m" << " "
		 << "\033[1;31m ATK \033[0m" << " : 10 "
		 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "ACTUAL : ";
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, OneFavWeaponRanged){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	attac.push_back(new Ranged(10, "Auto Crossbow"));
	attac.front() -> Favorite();

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl; 
	std::cout << "\033[1;33m ** \033[0m" << "Auto Crossbow" << "\033[1;33m ** \033[0m" << " " 
		 << "\033[1;31m ATK \033[0m" << " : 10 "
		 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "ACTUAL : ";
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Auto Crossbow" << "\033[1;33m ** \033[0m" << " " 
		 << "\033[1;31m ATK \033[0m" << " : 10 "
		 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "ACTUAL : ";
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, OneFavArmorLightArmor){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	protec.push_back(new LightArmor(10, "Thief Cloak"));
	protec.front() -> Favorite();

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "Armors : " << std::endl; 
	std::cout << "\033[1;33m ** \033[0m" << "Thief Cloak" << "\033[1;33m ** \033[0m" << " "
		 << "\033[1;31m ATK \033[0m" << " : 0 "
		 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "ACTUAL : ";
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Thief Cloak" << "\033[1;33m ** \033[0m" << " "
		 << "\033[1;31m ATK \033[0m" << " : 0 "
		 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "ACTUAL : ";
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, OneFavArmorHeavyArmor){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	protec.push_back(new HeavyArmor(10, "Juggernaut Chestplate"));
	protec.front() -> Favorite();

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Juggernaut Chestplate" << "\033[1;33m ** \033[0m" << " "
		 << "\033[1;31m ATK \033[0m" << " : 0 "
		 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "ACTUAL : ";
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Juggernaut Chestplate" << "\033[1;33m ** \033[0m" << " "
		 << "\033[1;31m ATK \033[0m" << " : 0 "
		 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "ACTUAL : ";
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, OneFavEach){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	

	attac.push_back(new Melee(10, "Steel Spear"));
	attac.push_back(new Ranged(100, "Sling-shot"));
	attac.push_back(new Ranged(15, "Auto Crossbow"));
	attac.push_back(new Melee(50, "Stick"));
	attac.back()->Favorite();
	
	protec.push_back(new LightArmor(12, "Thief Cloak"));
	protec.push_back(new HeavyArmor(102, "Plot-Armor"));
	protec.push_back(new HeavyArmor(16, "Juggernaut Chestplate"));
	protec.push_back(new LightArmor(52, "T-shirt"));
	protec.back()->Favorite();
	
	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Stick" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 50 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Sling-shot " 
		 	<< "\033[1;31m ATK \033[0m" << " : 100 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Auto Crossbow " 
		 	 << "\033[1;31m ATK \033[0m" << " : 15 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Steel Spear " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;

	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "T-shirt" << "\033[1;33m ** \033[0m" << " " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 52 " << std::endl;
	std::cout << "Thief Cloak " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 12 " << std::endl;
	std::cout << "Plot-Armor " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 102 " << std::endl;	
	std::cout << "Juggernaut Chestplate " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 16 " << std::endl;

	std::cout << "ACTUAL : ";
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "T-shirt" << "\033[1;33m ** \033[0m" << " " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 52 " << std::endl;
	std::cout << "Plot-Armor " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 102 " << std::endl;
	std::cout << "Juggernaut Chestplate " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 16 " << std::endl;
	std::cout << "Thief Cloak " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 12 " << std::endl;

	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Stick" << "\033[1;33m ** \033[0m" << " " 
		 	 << "\033[1;31m ATK \033[0m" << " : 50 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Steel Spear " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Sling-shot " 
		 	<< "\033[1;31m ATK \033[0m" << " : 100 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Auto Crossbow " 
		 	 << "\033[1;31m ATK \033[0m" << " : 15 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;	
	
	std::cout << "ACTUAL : ";
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, AllFav){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	

	attac.push_back(new Melee(10, "Steel Spear"));
	attac.back()->Favorite();
	attac.push_back(new Ranged(100, "Sling-shot"));
	attac.back()->Favorite();
	attac.push_back(new Ranged(15, "Auto Crossbow"));
	attac.back()->Favorite();
	attac.push_back(new Melee(50, "Stick"));
	attac.back()->Favorite();
	
	protec.push_back(new LightArmor(12, "Thief Cloak"));
	protec.back()->Favorite();
	protec.push_back(new HeavyArmor(102, "Plot-Armor"));
	protec.back()->Favorite();
	protec.push_back(new HeavyArmor(16, "Juggernaut Chestplate"));
	protec.back()->Favorite();
	protec.push_back(new LightArmor(52, "T-shirt"));
	protec.back()->Favorite();
	
	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Sling-shot" << "\033[1;33m ** \033[0m" << " " 
		 	<< "\033[1;31m ATK \033[0m" << " : 100 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Stick" << "\033[1;33m ** \033[0m" << " " 
		 	 << "\033[1;31m ATK \033[0m" << " : 50 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Auto Crossbow" << "\033[1;33m ** \033[0m" << " " 
		 	 << "\033[1;31m ATK \033[0m" << " : 15 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Steel Spear" << "\033[1;33m ** \033[0m" << " "
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;

	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Thief Cloak" << "\033[1;33m ** \033[0m" << " "
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 12 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Plot-Armor" << "\033[1;33m ** \033[0m" << " "
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 102 " << std::endl;	
	std::cout << "\033[1;33m ** \033[0m" << "Juggernaut Chestplate" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 16 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "T-shirt" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 52 " << std::endl;

	std::cout << "ACTUAL : ";
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Plot-Armor" << "\033[1;33m ** \033[0m" << " "
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 102 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "T-shirt" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 52 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Juggernaut Chestplate" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 16 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Thief Cloak" << "\033[1;33m ** \033[0m" << " "
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 12 " << std::endl;

	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Steel Spear" << "\033[1;33m ** \033[0m" << " "
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Sling-shot" << "\033[1;33m ** \033[0m" << " "
		 	<< "\033[1;31m ATK \033[0m" << " : 100 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Auto Crossbow" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 15 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Stick" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 50 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;	
	
	std::cout << "ACTUAL : ";
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, SameStatsOneFav){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	attac.push_back(new Melee(10, "Steel Spear"));
	attac.push_back(new Melee(10, "Stick"));
	attac.push_back(new Ranged(10, "Auto Crossbow"));
	attac.push_back(new Ranged(10, "Sling-shot"));
	attac.back()->Favorite();

	protec.push_back(new LightArmor(10, "Thief Cloak"));
	protec.push_back(new LightArmor(10, "T-shirt"));
	protec.push_back(new HeavyArmor(10, "Juggernaut Chestplate"));
	protec.push_back(new HeavyArmor(10, "Plot-Armor"));
	protec.back()->Favorite();

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Sling-shot" << "\033[1;33m ** \033[0m" << " "
		 	<< "\033[1;31m ATK \033[0m" << " : 10 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Steel Spear " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Stick " 
		 	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Auto Crossbow " 
		 	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	

	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Plot-Armor" << "\033[1;33m ** \033[0m" << " " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "Thief Cloak " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "T-shirt " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "Juggernaut Chestplate " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	
	std::cout << "ACTUAL : ";
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Plot-Armor" << "\033[1;33m ** \033[0m" << " " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "Thief Cloak " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "T-shirt " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "Juggernaut Chestplate " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;

	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Sling-shot" << "\033[1;33m ** \033[0m" << " "
		 	<< "\033[1;31m ATK \033[0m" << " : 10 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Steel Spear " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Stick " 
		 	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Auto Crossbow " 
		 	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	
	std::cout << "ACTUAL : ";
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, InOrderOneFav){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	attac.push_back(new Ranged(100, "Sling-shot"));
	attac.push_back(new Melee(50, "Stick"));
	attac.push_back(new Ranged(15, "Auto Crossbow"));
	attac.push_back(new Melee(10, "Steel Spear"));
	attac.back() -> Favorite();
	
	protec.push_back(new HeavyArmor(102, "Plot-Armor"));
	protec.push_back(new LightArmor(52, "T-shirt"));
	protec.push_back(new HeavyArmor(16, "Juggernaut Chestplate"));
	protec.push_back(new LightArmor(12, "Thief Cloak"));
	protec.back() -> Favorite();

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Steel Spear" << "\033[1;33m ** \033[0m" << " " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Sling-shot " 
		 	<< "\033[1;31m ATK \033[0m" << " : 100 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Stick " 
		 	 << "\033[1;31m ATK \033[0m" << " : 50 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Auto Crossbow " 
		 	 << "\033[1;31m ATK \033[0m" << " : 15 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;

	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Thief Cloak" << "\033[1;33m ** \033[0m" << " " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 12 " << std::endl;
	std::cout << "Plot-Armor " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 102 " << std::endl;
	std::cout << "T-shirt " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 52 " << std::endl;
	std::cout << "Juggernaut Chestplate " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 16 " << std::endl;
	
	std::cout << "ACTUAL : ";
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Thief Cloak" << "\033[1;33m ** \033[0m" << " " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 12 " << std::endl;
	std::cout << "Plot-Armor " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 102 " << std::endl;
	std::cout << "T-shirt " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 52 " << std::endl;
	std::cout << "Juggernaut Chestplate " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 16 " << std::endl;

	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Steel Spear" << "\033[1;33m ** \033[0m" << " " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Sling-shot " 
		 	<< "\033[1;31m ATK \033[0m" << " : 100 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Stick " 
		 	 << "\033[1;31m ATK \033[0m" << " : 50 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Auto Crossbow " 
		 	 << "\033[1;31m ATK \033[0m" << " : 15 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "ACTUAL : ";
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, ReveseOrderOneFav){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	attac.push_back(new Melee(10, "Steel Spear"));
	attac.push_back(new Ranged(15, "Auto Crossbow"));
	attac.push_back(new Melee(50, "Stick"));
	attac.push_back(new Ranged(100, "Sling-shot"));
	attac.back()->Favorite();

	protec.push_back(new LightArmor(12, "Thief Cloak"));
	protec.push_back(new HeavyArmor(16, "Juggernaut Chestplate"));
	protec.push_back(new LightArmor(52, "T-shirt"));
	protec.push_back(new HeavyArmor(102, "Plot-Armor"));
	protec.back()->Favorite();

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Sling-shot" << "\033[1;33m ** \033[0m" << " " 
		 	<< "\033[1;31m ATK \033[0m" << " : 100 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Stick " 
		 	 << "\033[1;31m ATK \033[0m" << " : 50 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Auto Crossbow " 
		 	 << "\033[1;31m ATK \033[0m" << " : 15 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Steel Spear " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;

	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Plot-Armor" << "\033[1;33m ** \033[0m" << " " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 102 " << std::endl;
	std::cout << "Thief Cloak " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 12 " << std::endl;
	std::cout << "Juggernaut Chestplate " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 16 " << std::endl;
	std::cout << "T-shirt " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 52 " << std::endl;
	std::cout << "ACTUAL : ";
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Plot-Armor" << "\033[1;33m ** \033[0m" << " " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 102 " << std::endl;
	std::cout << "T-shirt " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 52 " << std::endl;
	std::cout << "Juggernaut Chestplate " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 16 " << std::endl;
	std::cout << "Thief Cloak " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 12 " << std::endl;

	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Sling-shot" << "\033[1;33m ** \033[0m" << " "  
		 	<< "\033[1;31m ATK \033[0m" << " : 100 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Steel Spear " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Auto Crossbow " 
		 	 << "\033[1;31m ATK \033[0m" << " : 15 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Stick " 
		 	 << "\033[1;31m ATK \033[0m" << " : 50 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "ACTUAL : ";
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, SameStatsMultFav){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	attac.push_back(new Melee(10, "Steel Spear"));
	attac.push_back(new Melee(10, "Stick"));
	attac.back()->Favorite();
	attac.push_back(new Ranged(10, "Auto Crossbow"));
	attac.push_back(new Ranged(10, "Sling-shot"));
	attac.back()->Favorite();

	protec.push_back(new LightArmor(10, "Thief Cloak"));
	protec.push_back(new LightArmor(10, "T-shirt"));
	protec.back()->Favorite();
	protec.push_back(new HeavyArmor(10, "Juggernaut Chestplate"));
	protec.push_back(new HeavyArmor(10, "Plot-Armor"));
	protec.back()->Favorite();

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Stick" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Sling-shot" << "\033[1;33m ** \033[0m" << " "
		 	<< "\033[1;31m ATK \033[0m" << " : 10 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Steel Spear " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Auto Crossbow " 
		 	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;

	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "T-shirt" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Plot-Armor" << "\033[1;33m ** \033[0m" << " " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "Thief Cloak " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "Juggernaut Chestplate " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	
	std::cout << "ACTUAL : ";
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "T-shirt" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Plot-Armor" << "\033[1;33m ** \033[0m" << " " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "Thief Cloak " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "Juggernaut Chestplate " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;

	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Stick" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;	
	std::cout << "\033[1;33m ** \033[0m" << "Sling-shot" << "\033[1;33m ** \033[0m" << " "
		 	<< "\033[1;31m ATK \033[0m" << " : 10 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Steel Spear " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Auto Crossbow " 
		 	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;	 	
	
	std::cout << "ACTUAL : ";
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, InOrderMultFav){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	attac.push_back(new Ranged(100, "Sling-shot"));
	attac.push_back(new Melee(50, "Stick"));
	attac.back() -> Favorite();
	attac.push_back(new Ranged(15, "Auto Crossbow"));
	attac.push_back(new Melee(10, "Steel Spear"));
	attac.back() -> Favorite();
	
	protec.push_back(new HeavyArmor(102, "Plot-Armor"));
	protec.push_back(new LightArmor(52, "T-shirt"));
	protec.back() -> Favorite();
	protec.push_back(new HeavyArmor(16, "Juggernaut Chestplate"));
	protec.push_back(new LightArmor(12, "Thief Cloak"));
	protec.back() -> Favorite();

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Stick" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 50 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Steel Spear" << "\033[1;33m ** \033[0m" << " " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Sling-shot " 
		 	<< "\033[1;31m ATK \033[0m" << " : 100 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Auto Crossbow " 
		 	 << "\033[1;31m ATK \033[0m" << " : 15 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;

	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "T-shirt" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 52 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Thief Cloak" << "\033[1;33m ** \033[0m" << " " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 12 " << std::endl;
	std::cout << "Plot-Armor " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 102 " << std::endl;
	std::cout << "Juggernaut Chestplate " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 16 " << std::endl;
	
	std::cout << "ACTUAL : ";
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "T-shirt" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 52 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Thief Cloak" << "\033[1;33m ** \033[0m" << " " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 12 " << std::endl;
	std::cout << "Plot-Armor " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 102 " << std::endl;
	std::cout << "Juggernaut Chestplate " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 16 " << std::endl;

	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Stick" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 50 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Steel Spear" << "\033[1;33m ** \033[0m" << " " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Sling-shot " 
		 	<< "\033[1;31m ATK \033[0m" << " : 100 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Auto Crossbow " 
		 	 << "\033[1;31m ATK \033[0m" << " : 15 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "ACTUAL : ";
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, ReveseOrderMultFav){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	attac.push_back(new Melee(10, "Steel Spear"));
	attac.push_back(new Ranged(15, "Auto Crossbow"));
	attac.back()->Favorite();
	attac.push_back(new Melee(50, "Stick"));
	attac.push_back(new Ranged(100, "Sling-shot"));
	attac.back()->Favorite();

	protec.push_back(new LightArmor(12, "Thief Cloak"));
	protec.push_back(new HeavyArmor(16, "Juggernaut Chestplate"));
	protec.back()->Favorite();
	protec.push_back(new LightArmor(52, "T-shirt"));
	protec.push_back(new HeavyArmor(102, "Plot-Armor"));
	protec.back()->Favorite();

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Sling-shot" << "\033[1;33m ** \033[0m" << " " 
		 	<< "\033[1;31m ATK \033[0m" << " : 100 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Auto Crossbow" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 15 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Stick " 
		 	 << "\033[1;31m ATK \033[0m" << " : 50 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Steel Spear " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;

	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Juggernaut Chestplate" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 16 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Plot-Armor" << "\033[1;33m ** \033[0m" << " " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 102 " << std::endl;
	std::cout << "Thief Cloak " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 12 " << std::endl;
	std::cout << "T-shirt " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 52 " << std::endl;
	std::cout << "ACTUAL : ";
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Plot-Armor" << "\033[1;33m ** \033[0m" << " " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 102 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Juggernaut Chestplate" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 16 " << std::endl;
	std::cout << "T-shirt " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 52 " << std::endl;
	std::cout << "Thief Cloak " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 12 " << std::endl;

	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Auto Crossbow" << "\033[1;33m ** \033[0m" << " "
		 	 << "\033[1;31m ATK \033[0m" << " : 15 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Sling-shot" << "\033[1;33m ** \033[0m" << " "  
		 	<< "\033[1;31m ATK \033[0m" << " : 100 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Steel Spear " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Stick " 
		 	 << "\033[1;31m ATK \033[0m" << " : 50 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	
	std::cout << "ACTUAL : ";
	test2 -> Display(attac, protec);
}




#endif
