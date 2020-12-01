#ifndef __LIGHTARMOR_TESTS_HPP
#define __LIGHTARMOR_TESTS_HPP
#include "gtest/gtest.h"
#include <stdexcept>
#include <iostream>
#include "LightArmor.hpp"
#include "UserClass.hpp"
#include "Ranger.hpp"
using namespace std;

TEST(RangedArmorTest, StateItems) {
	Ranger* test = new Ranger();

	Armors* testLightArmor = test->AddArmor(5, "lightArmor");


	EXPECT_EQ(testLightArmor->getState(), false);
	testLightArmor->Favorite();
	EXPECT_EQ(testLightArmor->getState(), true);
	testLightArmor->Unfavorite();
	EXPECT_EQ(testLightArmor->getState(), false);
}

TEST(RangedArmorTest, getDefAtk) {
	Ranger* test = new Ranger();

	Armors* testLightArmor = test->AddArmor(5, "weightlessArmor");

	EXPECT_EQ(testLightArmor->getAttack(), 0);
	EXPECT_EQ(testLightArmor->getDefense(), 5);
}

TEST(RangedItemTest, Display_A) {
	Ranger* test = new Ranger();

	Armors* testLightArmor = test->AddArmor(5, "SuperlightArmor");

	cout << "EXPECT: "<<"SuperlightArmor" << endl;
	cout << "ACTUAL: ";
	testLightArmor->Display();
	testLightArmor->Favorite();
	cout << "EXPECTS: " << "\033[1;33m ** \033[0m" << "SuperlightArmor" << "\033[1;33m ** \033[0m" << endl;
	cout << "ACTUAL: ";
	testLightArmor->Display();
}
#endif //__LIGHTARMOR_TESTS_HPP
