#ifndef __LIGHTARMOR_TEST_HPP
#define __LIGHTARMOR_TEST_HPP
#include "gtest/gtest.h"
#include <stdexcept>
#include <iostream>
#include "LightArmor.hpp"
#include "ranger.hpp"
using namespace std;

TEST(RangedArmorTest, StateItems) {
	Ranger* test = new Ranger();

	LightArmor* testLightArmor = test->AddLightArmor(5, "lightArmor");


	EXPECT_EQ(testLightArmor->getState(), false);
	test->Favorite();
	EXPECT_EQ(testLightArmor->getState(), true);
	test->UnFavorite();
	EXPECT_EQ(testLightArmor->getState(), false);
}

TEST(RangedArmorTest, getDef) {
	Ranger* test = new Ranger();

	LightArmor* testLightArmor = test->AddLightArmor(5, "weightlessArmor");

	EXPECT_EQ(testLightArmor->getAttack(), 0);
	EXPECT_EQ(testLightArmor->getDefense(), 5);
}

TEST(RangedItemTest, Display_A) {
	Ranger* test = new Ranger();

	LightArmor* testLightArmor = test->AddLightArmor(5, "SuperlightArmor");

	cout << "EXPECT"<<"SuperlightArmor" << endl;
	cout << "ACTUAL";
	testLightArmor->Display();
	testLightArmor->Favorite();
	cout << "EXPECTS: " << "\033[1;33m ** \033[0m" << "SuperlightArmor" << "\033[1;33m ** \033[0m" << endl;
	cout << "ACTUAL: ";
	testLightArmor->Display();
}
#endif //__LIGHTARMOR_TEST_HPP
