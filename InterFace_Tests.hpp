#ifndef __INTERFACE_TESTS__
#define __INTERFACE_TESTS__
#include "gtest/gtest.h"
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
TEST(InterFaceTesting, ClassCheck) {
	Ranger* userClass = new Ranger();
	Interface* PlayerClass = new Interface(userClass);
	playerClass->AddWeapon(10, "Bow");
	Weapons* check = playerClass->weapons.back();
	std::cout << "EXPECTS : #Ranged" << std::endl;
	std::cout << "ACTUAL : " << typeid(*check).name() << std::endl;
	playerClass->addArmor(10, "LightArmor");
	Armors* check2 = playerClass->armors.back();
	std::cout << "EXPECTS : #LightArmor" << std::endl;
	std::cout << "ACTUAL : " << typeid(*check2).name() << std::endl;
	EXPECT_EQ(PlayerClass->weapons.size(), 1);
	EXPECT_EQ(PlayerClass->armors.size(), 1);
	delete userClass;
	delete playerClass;
	delete check;
}
Test(InterfaceTesting, SameName) {
	Ranger* userClass = new Ranger();
	Interface* PlayerClass = new Interface(userClass);
	Weapons* check2 = playerClass->weapons.back();
	std::cout << "EXPECTS: Staff (RW)";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "10" << " " << "\033[1;32m DEF \033[0m" << " : " << "0" << " " << std::endl;
	std::cout << "Item already exists in your inventory" << std::endl;
	std::cout << "ACTUAL : ";
	playerClass->addWeapon(10, "staff");
	playerClass->addWeapon(15, "staff");
	EXPECT_EQ(playerClass->weapons.size(), 1);

	
	playerClass->AddArmor(10, "WeightlessArmor");
	std::cout << "EXPECTS: WeightlessArmor (RW)";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "10" << " " << "\033[1;32m DEF \033[0m" << " : " << "0" << " " << std::endl;
	std::cout << "Item already exists in your inventory" << std::endl;
	std::cout << "ACTUAL : ";
	playerClass->addArmor(10, "WeightlessArmor");
	playerClass->addArmor(15, "WeightlessArmor");
	
	EXPECT_EQ(playerClass->armors.size(), 1);
	delete userClass;
	delete playerClass;
	delete check2;
}
TEST(InerFaceTesting, AddMultipleArmor) {
	Ranger* userClass = new Ranger();
	Interface* PlayerClass = new Interface(userClass);
	std::cout << "EXPECTS: SilverArmor (RW)";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "10" << " " << "\033[1;32m DEF \033[0m" << " : " << "0" << " " << std::endl;
	std::cout << "EXpects: FastArmor(RW)";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "15" << " " << "\033[1;32m DEF \033[0m" << " : " << "0" << " " << std::endl;
	std::cout << "EXpects: HalfArmor(RW)";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "25" << " " << "\033[1;32m DEF \033[0m" << " : " << "0" << " " << std::endl;

	playerClass->addArmor(10, "SilverArmor");
	playerClass->addArmor(15, "FastArmor");
	playerClass->addArmor(25, "HalfArmor");
	delete userClass;
	delete playerClass;
}
TEST(InerFaceTesting, AddMultipleWeap) {
	Ranger* userClass = new Ranger();
	Interface* PlayerClass = new Interface(userClass);
	std::cout << "EXPECTS: Staff (RW)";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "0" << " " << "\033[1;32m DEF \033[0m" << " : " << "10" << " " << std::endl;
	std::cout << "EXpects: Bow(RW)";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "0" << " " << "\033[1;32m DEF \033[0m" << " : " << "15" << " " << std::endl;
	std::cout << "EXpects: LightSword(RW)";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "0" << " " << "\033[1;32m DEF \033[0m" << " : " << "25" << " " << std::endl;

	playerClass->addArmor(10, "Staff");
	playerClass->addArmor(15, "Bow");
	playerClass->addArmor(25, "LightSword");
	delete userClass;
	delete playerClass;
}

TEST(InerFaceTesting, RemoveItem) {
	Ranger* userClass = new Ranger();
	Interface* PlayerClass = new Interface(userClass);
	033[0m" << " : " << "15" << " " << std::endl;
	
	playerClass->addArmor(10, "LightArmor");
	playerClass->addArmor(15, "weightlessArmor");
	playerClass->addArmor(20, "MagicArmor");
	playerClass->addArmor(25, "HuntingArmor");

	playerClass->armors.back()->Favorite();
	std::cout << "EXPECTS: LightArmor(RW) " << std::endl;
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "0" << " " << "\033[1;32m DEF \033[0m" << " : " << "10" << " " << std::endl;
	std::cout << "Removed LightArmor(RW) "
		;
	std::cout << "EXPECTS: weightlessArmor(RW) " << std::endl;
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "0" << " " << "\033[1;32m DEF \033[0m" << " : " << "15" << " " << std::endl;
	std::cout << "Removed weightlessArmor(RW) ";

	std::cout << "EXPECTS: MagicArmor(RW) " << std::endl;
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "0" << " " << "\033[1;32m DEF \033[0m" << " : " << "20" << " " << std::endl;
	std::cout << "Removed MagicArmor(RW) ";

	std::cout << "EXPECTS: HuntingArmor(RW) " << std::endl;
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "0" << " " << "\033[1;32m DEF \033[0m" << " : " << "25" << " " << std::endl;
	std::cout << "Removed HuntingArmor(RW) ";

	std::cout << "EXPECTS: " << std::endl;

	playerClass->removed("LightArmor");
	playerClass->removed("weightlessArmor");
	playerClass->removed("MagicArmor");
	playerClass->removed("HuntingArmor");

	EXPECT_EQ(playerClass->weapons.size(), 0);
	EXPECT_EQ(playerClass->armors.size(), 1);
	delete userClass;
	delete playerClass;
}
TEST(InerFaceTesting, FavTest) {
	Ranger* userClass = new Ranger();
	Interface* PlayerClass = new Interface(userClass);
	playerClass->addWeapon(10, "LightSword");
	playerClass->addWeapon(25, "bow");
	playerClass->addWeapon(50, "staff");

	playerClass->AddArmor(10, "LightArmor");
	playerClass->AddArmor(25, "MagicArmor");
	playerClass->AddArmor(50, "HuntingArmor");
	
	std::cout << "EXPECTS : " << std::endl;
	
	std::cout <<"favorited"<< "\033[1;33m  ** \033[0m" << "bow(RW)" << "\033[1;33m  ** \033[0m" << " ";
	std::cout << "\033[1;31m ATK \033[0m" << " : " << "10" << " " << "\033[1;32m DEF \033[0m" << " : " << "0" << " " << std::endl;
	std::cout << "Item is already favorited." << std::endl;
	std::cout << "Item does not exist in your inventory" << std::endl;
	std::cout << "favorited" << "\033[1;33m  ** \033[0m" << "LightArmor(RW)" << "\033[1;33m  ** \033[0m" << " ";

	playerClass->Favorite("bow");
	playerClass->Favorite("bow");
	playerClass->Favorite("LightArmor");
	playerClass->Favorite("DontExist");
	delete userClass;
	delete playerClass
}

TEST(InerFaceTesting, UnFavTest) {
	Ranger* userClass = new Ranger();
	Interface* PlayerClass = new Interface(userClass);
	playerClass->addWeapon(10, "LightSword");
	playerClass->addWeapon(25, "bow");
	playerClass->addWeapon(50, "staff");

	playerClass->AddArmor(10, "LightArmor");
	playerClass->AddArmor(25, "MagicArmor");
	playerClass->AddArmor(50, "HuntingArmor");

	playerClass->weapons.at(1)->Favorite();
	playerClass->armors.at(1)->Favorite();

	std::cout << "EXPECTS : " << std::endl;
	std::cout << "Unfavorited LightSword." << std::endl;
	std::cout << "Unfavorited" << std::cout << "\033[1;31m ATK \033[0m" << " : " << "10" << " " << "\033[1;32m DEF \033[0m" << " : " << "0" << " " << std::endl;

	std::cout << "Unfavorited bow." << std::endl;
	std::cout << "Unfavorited" << std::cout << "\033[1;31m ATK \033[0m" << " : " << "25" << " " << "\033[1;32m DEF \033[0m" << " : " << "0" << " " << std::endl;
	std::cout << "Item does not exist in your inventory" << std::endl;

	playerClass->Unfavorite("LightSword");
	playerClass->Unfavorite("bow");
	playerClass->Unfavorite("DontExist");
	delete userClass;
	delete playerClass

}
TEST(InerFaceTesting, HightAttDisplay) {
	Ranger* userClass = new Ranger();
	Interface* PlayerClass = new Interface(userClass);

	playerClass->addWeapon(10, "LightSword");
	playerClass->addWeapon(25, "bow");
	playerClass->addWeapon(50, "staff");

	playerClass->AddArmor(10, "LightArmor");
	playerClass->AddArmor(25, "MagicArmor");
	playerClass->AddArmor(50, "HuntingArmor");

	playerClass->weapons.at(1)->Favorite();
	playerClass->armors.at(1)->Favorite();

	playerClass->Display(1);
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m  \033[0m" << "LightSword (RW)" << "\033[1;33m  \033[0m" << " "
		<< "\033[1;31m ATK \033[0m" << " : 10 "
		<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "bow (RW) "
		<< "\033[1;31m ATK \033[0m" << " : 25 "
		<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "staff (RW) "
		<< "\033[1;31m ATK \033[0m" << " : 50 "
		<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "Armor : " << std::endl;
	std::cout << "\033[1;33m  \033[0m" << "LightArmor (RW)" << "\033[1;33m  \033[0m" << " "
		<< "\033[1;31m ATK \033[0m" << " : 0 "
		<< "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "MagicArmor (RW) "
		<< "\033[1;31m ATK \033[0m" << " : 0 "
		<< "\033[1;32m DEF \033[0m" << " : 25 " << std::endl;
	std::cout << "HuntingArmor (RW) "
		<< "\033[1;31m ATK \033[0m" << " : 0 "
		<< "\033[1;32m DEF \033[0m" << " : 50 " << std::endl;
	delete userClass;
	delete playerClass
}
TEST(InerFaceTesting, HightDefDisplay) {
	Ranger* userClass = new Ranger();
	Interface* PlayerClass = new Interface(userClass);

	playerClass->addWeapon(10, "LightSword");
	playerClass->addWeapon(25, "bow");
	playerClass->addWeapon(50, "staff");

	playerClass->AddArmor(10, "LightArmor");
	playerClass->AddArmor(25, "MagicArmor");
	playerClass->AddArmor(50, "HuntingArmor");

	playerClass->weapons.at(1)->Favorite();
	playerClass->armors.at(1)->Favorite();

	playerClass->Display(2);
	std::cout << "EXPECTS :" << std::endl;
	std::cout << "Armor : " << std::endl;
	std::cout << "\033[1;33m  \033[0m" << "LightArmor (RW)" << "\033[1;33m  \033[0m" << " "
		<< "\033[1;31m ATK \033[0m" << " : 0 "
		<< "\033[1;32m DEF \033[0m" << " : 10 " << std::endl;
	std::cout << "MagicArmor (RW) "
		<< "\033[1;31m ATK \033[0m" << " : 0 "
		<< "\033[1;32m DEF \033[0m" << " : 25 " << std::endl;
	std::cout << "HuntingArmor (RW) "
		<< "\033[1;31m ATK \033[0m" << " : 0 "
		<< "\033[1;32m DEF \033[0m" << " : 50 " << std::endl;
	std::cout << "Weapons : " << std::endl;
	std::cout << "\033[1;33m  \033[0m" << "LightSword (RW)" << "\033[1;33m  \033[0m" << " "
		<< "\033[1;31m ATK \033[0m" << " : 10 "
		<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "bow (RW) "
		<< "\033[1;31m ATK \033[0m" << " : 25 "
		<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;
	std::cout << "staff (RW) "
		<< "\033[1;31m ATK \033[0m" << " : 50 "
		<< "\033[1;32m DEF \033[0m" << " : 0 " << std::endl;


	delete userClass;
	delete playerClass
}
#endif
