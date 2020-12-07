#ifndef __INTERFACE_TESTS_HPP__
#define __INTERFACE_TESTS_HPP__
#include "gtest/gtest.h"
#include <vector>
#include <iostream>
#include <typeinfo>
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

#include "Ranger.hpp"
#include "Interface.hpp"
//Ranger Interface Testing
TEST(InterfaceTesting, ClassCheck) {
	Ranger* userClass = new Ranger();
	Interface* playerClass = new Interface(userClass);
	playerClass->AddWeapon(10, "Bow");

	Weapons* check = playerClass->weapons.back();
	std::cout << "EXPECTS : " << std::endl << "#RANGED" << std::endl;
	std::cout << "ACTUAL : " << std::endl << typeid(*check).name() << std::endl;

	playerClass->AddArmor(10, "LightArmor");
	Armors* check2 = playerClass->armors.back();
	std::cout << "EXPECTS : " << std::endl << "##LightArmor" << std::endl;
	std::cout << "ACTUAL : " << std::endl << typeid(*check2).name() << std::endl;
	EXPECT_EQ(playerClass->weapons.size(), 1);
	EXPECT_EQ(playerClass->armors.size(), 1);

}

TEST(InterfaceTesting, SameName) {
	Ranger* userClass = new Ranger();
	Interface* playerClass = new Interface(userClass);

	std::cout << "EXPECTS : " << std::endl << "LightSword (RW) ";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "10" << " " << "\033[1;32m DEF \033[0m" << " : " << "0" << " " << std::endl;
	std::cout << "Item already exists in your inventory" << std::endl;
	std::cout << "ACTUAL : " << std::endl;
	playerClass->AddWeapon(10, "LightSword");
	playerClass->AddWeapon(15, "LightSword");


	EXPECT_EQ(playerClass->weapons.size(), 1);

	std::cout << "EXPECTS : " << std::endl << "MagicArmor (RW) ";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "0" << " " << "\033[1;32m DEF \033[0m" << " : " << "10" << " " << std::endl;
	std::cout << "Item already exists in your inventory" << std::endl;
	std::cout << "ACTUAL : " << std::endl;
	playerClass->AddArmor(10, "MagicArmor");
	playerClass->AddArmor(15, "MagicArmor");

	EXPECT_EQ(playerClass->armors.size(), 1);

}

TEST(InterfaceTesting, AddMultipleArmorsRanger) {
	Ranger* userClass = new Ranger();
	Interface* playerClass = new Interface(userClass);

	std::cout << "EXPECTS : " << std::endl << "MagicArmor (RW) ";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "0" << " " << "\033[1;32m DEF \033[0m" << " : " << "10" << " " << std::endl;
	std::cout << "RangerArmor (RW) ";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "0" << " " << "\033[1;32m DEF \033[0m" << " : " << "25" << " " << std::endl;
	std::cout << "DesertArmor (RW) ";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "0" << " " << "\033[1;32m DEF \033[0m" << " : " << "50" << " " << std::endl;
	std::cout << "ACTUAL : " << std::endl;
	playerClass->AddArmor(10, "MagicArmor");
	playerClass->AddArmor(25, "RangerArmor");
	playerClass->AddArmor(50, "DesertArmor");

	EXPECT_EQ(playerClass->armors.size(), 3);

}


TEST(InterfaceTesting, AddMultipleWeaponsRanger) {
	Ranger* userClass = new Ranger();
	Interface* playerClass = new Interface(userClass);

	std::cout << "EXPECTS : " << std::endl << "bow (RW) ";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "10" << " " << "\033[1;32m DEF \033[0m" << " : " << "0" << " " << std::endl;
	std::cout << "Staff (RW) ";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "25" << " " << "\033[1;32m DEF \033[0m" << " : " << "0" << " " << std::endl;
	std::cout << "LightSword (RW) ";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "50" << " " << "\033[1;32m DEF \033[0m" << " : " << "0" << " " << std::endl;
	std::cout << "ACTUAL : " << std::endl;
	playerClass->AddWeapon(10, "bow");
	playerClass->AddWeapon(25, "Staff");
	playerClass->AddWeapon(50, "LightSword");

	EXPECT_EQ(playerClass->weapons.size(), 3);

}

TEST(IntefaceTesting, RemovItems) {
	Ranger* userClass = new Ranger();
	Interface* playerClass = new Interface(userClass);

	playerClass->AddWeapon(10, "bow");
	playerClass->AddWeapon(25, "Staff");
	playerClass->AddArmor(10, "MagicArmor");
	playerClass->AddArmor(50, "DesertArmor");
	playerClass->armors.back()->Favorite();

	std::cout << "EXPECTS : " << std::endl << "Removed bow (RW) ";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "10" << " " << "\033[1;32m DEF \033[0m" << " : " << "0" << " " << std::endl;
	std::cout << "Removed Staff (RW) ";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "25" << " " << "\033[1;32m DEF \033[0m" << " : " << "0" << " " << std::endl;
	std::cout << "ACTUAL : " << std::endl;
	playerClass->remove("bow");
	playerClass->remove("Staff");


	std::cout << "EXPECTS : " << std::endl << "Item does not exist in your inventory" << std::endl;
	std::cout << "Removed MagicArmor (RW) ";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "0" << " " << "\033[1;32m DEF \033[0m" << " : " << "10" << " " << std::endl;
	std::cout << "item is favorited. Unfavorite to remove.";
	std::cout << "ACTUAL : " << std::endl;
	playerClass->remove("RangerArmor");
	playerClass->remove("MagicArmor");
	playerClass->remove("DesertArmor");


	EXPECT_EQ(playerClass->weapons.size(), 0);
	EXPECT_EQ(playerClass->armors.size(), 1);

}

TEST(InterfaceTesting, FavTest) {
	Ranger* userClass = new Ranger();
	Interface* playerClass = new Interface(userClass);


	playerClass->AddWeapon(10, "bow");
	playerClass->AddWeapon(25, "Staff");
	playerClass->AddWeapon(50, "LightSword");

	playerClass->AddArmor(10, "MagicArmor");
	playerClass->AddArmor(25, "RangerArmor");
	playerClass->AddArmor(50, "DesertArmor");

	std::cout << "EXPECTS : " << std::endl;
	std::cout << "Favorited " << "\033[1;33m ** \033[0m" << "Staff (RW)" << "\033[1;33m ** \033[0m" << " ";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "25" << " " << "\033[1;32m DEF \033[0m" << " : " << "0" << " " << std::endl;
	std::cout << "Item is already favorited." << std::endl;
	std::cout << "Favorited " << "\033[1;33m ** \033[0m" << "DesertArmor (RW)" << "\033[1;33m ** \033[0m" << " ";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "0" << " " << "\033[1;32m DEF \033[0m" << " : " << "50" << " " << std::endl;
	std::cout << "Item does not exist in your inventory" << std::endl;
	std::cout << "ACTUAL : " << std::endl;
	playerClass->Favorite("Staff");
	playerClass->Favorite("Staff");
	playerClass->Favorite("DesertArmor");
	playerClass->Favorite("Test");

}

TEST(InterfaceTesting, UnfavTest) {
	Ranger* userClass = new Ranger();
	Interface* playerClass = new Interface(userClass);

	playerClass->AddWeapon(10, "bow");
	playerClass->AddWeapon(25, "Staff");
	playerClass->AddWeapon(50, "LightSword");

	playerClass->AddArmor(10, "MagicArmor");
	playerClass->AddArmor(25, "RangerArmor");
	playerClass->AddArmor(50, "DesertArmor");

	playerClass->weapons.at(1)->Favorite();
	playerClass->armors.at(2)->Favorite();


	std::cout << "EXPECTS : " << std::endl;
	std::cout << "Item is already unfavorited." << std::endl;
	std::cout << "Unfavorited Staff (RW) ";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "25" << " " << "\033[1;32m DEF \033[0m" << " : " << "0" << " " << std::endl;
	std::cout << "Unfavorited DesertArmor (RW) ";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "0" << " " << "\033[1;32m DEF \033[0m" << " : " << "50" << " " << std::endl;
	std::cout << "Item does not exist in your inventory" << std::endl;
	std::cout << "ACTUAL : " << std::endl;
	playerClass->Unfavorite("bow");
	playerClass->Unfavorite("Staff");
	playerClass->Unfavorite("DesertArmor");
	playerClass->Unfavorite("test");

}

TEST(InterfaceTesting, HighestAttackDisplayRanger) {
	Ranger* userClass = new Ranger();
	Interface* playerClass = new Interface(userClass);

	playerClass->AddWeapon(10, "bow");
	playerClass->AddWeapon(25, "Staff");
	playerClass->AddWeapon(50, "LightSword");

	playerClass->AddArmor(10, "MagicArmor");
	playerClass->AddArmor(25, "RangerArmor");
	playerClass->AddArmor(50, "DesertArmor");

	playerClass->weapons.at(1)->Favorite();
	playerClass->armors.at(2)->Favorite();


	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Staff (RW)" << "\033[1;33m ** \033[0m" << " "
		<< "\033[1;31m ATK \033[0m" << " : 25 "
		<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "LightSword (RW) "
		<< "\033[1;31m ATK \033[0m" << " : 50 "
		<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "bow (RW) "
		<< "\033[1;31m ATK \033[0m" << " : 10 "
		<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;

	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "DesertArmor (RW) " << "\033[1;33m ** \033[0m" << " "
		<< "\033[1;31m ATK \033[0m" << " : 0 "
		<< "\033[1;32m DEF \033[0m" << " : 50 " << std::endl;
	std::cout << "RangerArmor (RW) "
		<< "\033[1;31m ATK \033[0m" << " : 0 "
		<< "\033[1;32m DEF \033[0m" << " : 25 " << std::endl;
	std::cout << "MagicArmor (RW) "
		<< "\033[1;31m ATK \033[0m" << " : 0 "
		<< "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "ACTUAL : "<<;
		playerClass->Display(1);
	
}

TEST(InterfaceTesting, HighestDefenseDisplayRanger) {
	Ranger* userClass = new Ranger();
	Interface* playerClass = new Interface(userClass);

	playerClass->AddWeapon(10, "bow");
	playerClass->AddWeapon(25, "Staff");
	playerClass->AddWeapon(50, "LightSword");

	playerClass->AddArmor(10, "MagicArmor");
	playerClass->AddArmor(25, "RangerArmor");
	playerClass->AddArmor(50, "DesertArmor");

	playerClass->weapons.at(1)->Favorite();
	playerClass->armors.at(2)->Favorite();


	std::cout << "EXPECTS : " << std::endl;
	std::cout << "Armors : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "DesertArmor (RW) " << "\033[1;33m ** \033[0m" << " "
		<< "\033[1;31m ATK \033[0m" << " : 0 "
		<< "\033[1;32m DEF \033[0m" << " : 50 " << std::endl;
	std::cout << "MagicArmor (RW) "
		<< "\033[1;31m ATK \033[0m" << " : 0 "
		<< "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "RangerArmor (RW) "
		<< "\033[1;31m ATK \033[0m" << " : 0 "
		<< "\033[1;32m DEF \033[0m" << " : 25 " << std::endl;

	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m ** \033[0m" << "Staff (RW)" << "\033[1;33m ** \033[0m" << " "
		<< "\033[1;31m ATK \033[0m" << " : 25 "
		<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "bow (RW) "
		<< "\033[1;31m ATK \033[0m" << " : 10 "
		<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "LightSword (RW) "
		<< "\033[1;31m ATK \033[0m" << " : 50 "
		<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;

	std::cout << "ACTUAL : "<<;
		playerClass->Display(2);

}
#endif
