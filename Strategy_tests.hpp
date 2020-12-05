fndef __ITEMORDER_TESTS_HPP__
#define __ITEMORDER_TESTS_HPP__
#include "gtest/gtest.h"
/*#include <iostream>*/
#include <vector>

#include "ItemOrder.hpp"
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

TEST(ItemOrderSet, NoItemBothStrats){
    vector<Weapons*> attac;
    vector<Armors*> protec;
    ItemOrder* test1 = new HighestAttack();
    std::cout << "EXPECTS : " << std::endl << "\nWeapons :" << std::endl << "\nArmors : " << std::endl;
    std::cout << "ACTUAL : " << std::endl;
    test1 -> Display(attac, protec);

    std::cout << std::endl;
    ItemOrder* test2 = new HighestDefense();
    std::cout << "EXPECTS : " << std::endl << "\nArmors : " << std::endl << "\nWeapons :" << std::endl;
    std::cout << "ACTUAL : " << std::endl;
    test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, OneWeaponMelee){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	attac.push_back(new Melee(10, "Steel Spear"));

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "Steel Spear "  
		 << "\033[1;31m ATK \033[0m" << " : 10 "
		 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Armors : " << std::endl;

	std::cout << "ACTUAL : " << endl;
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "ACTUAL : " << std::endl;
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, OneWeaponRanged){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	attac.push_back(new Ranged(10, "Auto Crossbow"));

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl; 
	std::cout << "Auto Crossbow " 
		 << "\033[1;31m ATK \033[0m" << " : 10 "
		 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "ACTUAL : "<< std::endl;
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "Auto Crossbow " 
		 << "\033[1;31m ATK \033[0m" << " : 10 "
		 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "ACTUAL : " << std::endl;
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, OneArmorLightArmor){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	protec.push_back(new LightArmor(10, "Thief Cloak"));

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "Armors : " << std::endl; 
	std::cout << "Thief Cloak "
		 << "\033[1;31m ATK \033[0m" << " : 0 "
		 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "ACTUAL : " << std::endl;
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "Thief Cloak "
		 << "\033[1;31m ATK \033[0m" << " : 0 "
		 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "ACTUAL : " << std::endl;
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, OneArmorLightArmor){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	protec.push_back(new HeavyArmor(10, "Juggernaut Chestplate"));

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "Juggernaut Chestplate "
		 << "\033[1;31m ATK \033[0m" << " : 0 "
		 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "ACTUAL : "<< std::endl;
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "Juggernaut Chestplate "
		 << "\033[1;31m ATK \033[0m" << " : 0 "
		 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "ACTUAL : "<< std::endl;
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, FourEachBothStrats){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	

	attac.push_back(new Melee(10, "Steel Spear"));
	attac.push_back(new Ranged(100, "Sling-shot"));
	attac.push_back(new Ranged(15, "Auto Crossbow"));
	attac.push_back(new Melee(50, "Stick"));
	
	protec.push_back(new LightArmor(12, "Thief Cloak"));
	protec.push_back(new HeavyArmor(102, "Plot-Armor"));
	protec.push_back(new HeavyArmor(16, "Juggernaut Chestplate"));
	protec.push_back(new LightArmor(52, "T-shirt"));
	
	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "Sling-shot " 
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
	std::cout << "Thief Cloak " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 12 " << std::endl;
	std::cout << "Plot-Armor " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 102 " << std::endl;	
	std::cout << "Juggernaut Chestplate " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 16 " << std::endl;
	std::cout << "T-shirt " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 52 " << std::endl;

	std::cout << "ACTUAL : " << std::endl;;
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "Plot-Armor " 
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
	std::cout << "Steel Spear " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Sling-shot " 
		 	<< "\033[1;31m ATK \033[0m" << " : 100 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Auto Crossbow " 
		 	 << "\033[1;31m ATK \033[0m" << " : 15 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Stick " 
		 	 << "\033[1;31m ATK \033[0m" << " : 50 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;	
	
	std::cout << "ACTUAL : " << std::endl;
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, SameStatsBothStrats){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	attac.push_back(new Melee(10, "Steel Spear"));
	attac.push_back(new Melee(10, "Stick"));
	attac.push_back(new Ranged(10, "Auto Crossbow"));
	attac.push_back(new Ranged(10, "Sling-shot"));

	protec.push_back(new LightArmor(10, "Thief Cloak"));
	protec.push_back(new LightArmor(10, "T-shirt"));
	protec.push_back(new HeavyArmor(10, "Juggernaut Chestplate"));
	protec.push_back(new HeavyArmor(10, "Plot-Armor"));

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "Steel Spear " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Auto Crossbow " 
		 	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Stick " 
		 	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Sling-shot " 
		 	<< "\033[1;31m ATK \033[0m" << " : 10 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;

	std::cout << "Armors : " << std::endl;
	std::cout << "Thief Cloak " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "T-shirt " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "Juggernaut Chestplate " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "Plot-Armor " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "ACTUAL : " << std::endl;
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "Thief Cloak " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "T-shirt " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "Juggernaut Chestplate " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "Plot-Armor " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;

	std::cout << "Weapons : " << std::endl;
	std::cout << "Steel Spear " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Auto Crossbow " 
		 	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Stick " 
		 	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Sling-shot " 
		 	<< "\033[1;31m ATK \033[0m" << " : 10 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
		 	
	
	std::cout << "ACTUAL : " << std::endl;
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, InOrderBothStrats){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	attac.push_back(new Ranged(100, "Sling-shot"));
	attac.push_back(new Melee(50, "Stick"));
	attac.push_back(new Ranged(15, "Auto Crossbow"));
	attac.push_back(new Melee(10, "Steel Spear"));

	
	protec.push_back(new HeavyArmor(102, "Plot-Armor"));
	protec.push_back(new LightArmor(52, "T-shirt"));
	protec.push_back(new HeavyArmor(16, "Juggernaut Chestplate"));
	protec.push_back(new LightArmor(12, "Thief Cloak"));

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "Sling-shot " 
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
	std::cout << "Plot-Armor " 
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
	std::cout << "ACTUAL : " << std::endl;
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "Plot-Armor " 
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
	std::cout << "Sling-shot " 
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
	std::cout << "ACTUAL : " << std::endl;
	test2 -> Display(attac, protec);
}
TEST(ItemOrderSet, ReveseOrderBothStrats){
	vector<Weapons*> attac;
	vector<Armors*>	protec;	
	attac.push_back(new Melee(10, "Steel Spear"));
	attac.push_back(new Ranged(15, "Auto Crossbow"));
	attac.push_back(new Melee(50, "Stick"));
	attac.push_back(new Ranged(100, "Sling-shot"));

	protec.push_back(new LightArmor(12, "Thief Cloak"));
	protec.push_back(new HeavyArmor(16, "Juggernaut Chestplate"));
	protec.push_back(new LightArmor(52, "T-shirt"));
	protec.push_back(new HeavyArmor(102, "Plot-Armor"));

	ItemOrder* test1 = new HighestAttack();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "Sling-shot " 
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
	std::cout << "Thief Cloak " 
		  	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 12 " << std::endl;
	std::cout << "Juggernaut Chestplate " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 16 " << std::endl;
	std::cout << "T-shirt " 
		 	 << "\033[1;31m ATK \033[0m" << " : 0 "
		 	 << "\033[1;32m DEF \033[0m" << " : 52 " << std::endl;
	std::cout << "Plot-Armor " 
		 	<< "\033[1;31m ATK \033[0m" << " : 0 "
		 	<< "\033[1;32m DEF \033[0m" << " : 102 " << std::endl;
	std::cout << "ACTUAL : " << std::endl;
	test1 -> Display(attac, protec);

	std::cout << std::endl;
	ItemOrder* test2 = new HighestDefense();
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "Plot-Armor " 
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
	std::cout << "Steel Spear " 
		  	 << "\033[1;31m ATK \033[0m" << " : 10 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Auto Crossbow " 
		 	 << "\033[1;31m ATK \033[0m" << " : 15 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Stick " 
		 	 << "\033[1;31m ATK \033[0m" << " : 50 "
		 	 << "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Sling-shot " 
		 	<< "\033[1;31m ATK \033[0m" << " : 100 "
		 	<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "ACTUAL : " << std::endl;
	test2 -> Display(attac, protec);
}

#endif
