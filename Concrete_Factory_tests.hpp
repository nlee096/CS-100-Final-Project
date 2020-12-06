#ifndef __CONCRETE_FACTORY_TESTS_HPP__
#define __CONCRETE_FACTORY_TESTS_HPP__
#include "gtest/gtest.h"
#include <typeinfo>
#include <iostream>

#include "UserClass.hpp"
#include "Ranger.hpp"
#include "Warrior.hpp"

#include "Weapons.hpp"
/*
 * #include "Ranged.hpp"
 * #include "Melee.hpp"
 * */
#include "Armors.hpp"
/*
 * #include "LighArmor.hpp"
 * #include "HeavyArmor.hpp"
 * */

TEST(ConcreteFactorySet, WarriorAddWeapon){
	UserClass* playerClass = new Warrior();
	Weapons* test = playerClass->AddWeapon(10, "test sword");
	std::cout << "EXPECTS : #Melee" << std::endl;
	std::cout << "ACTUAL : " << typeid(*test).name() << std::endl;
}

TEST(ConcreteFactorySet, WarriorAddArmor){
	UserClass* playerClass = new Warrior();
	Armors* test = playerClass->AddArmor(10, "test armor");
	std::cout << "EXPECTS : ##HeavyArmor" << std::endl;
	std::cout << "ACTUAL : " << typeid(*test).name() << std::endl;
}
TEST(ConcreteFactorySet, RangerAddWeapon){
	UserClass* playerClass = new Ranger();
	Weapons* test = playerClass->AddWeapon(10, "test sword");
	std::cout << "EXPECTS : #Ranged" << std::endl;
	std::cout << "ACTUAL : " << typeid(*test).name() << std::endl;
}
TEST(ConcreteFactorySet, RangerAddArmor){
	UserClass* playerClass = new Ranger();
	Armors* test = playerClass->AddArmor(10, "test armor");
	std::cout << "EXPECTS : ##LightArmor" << std::endl;
	std::cout << "ACTUAL : " << typeid(*test).name() << std::endl;
}

#endif

