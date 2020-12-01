#ifndef __LIGHTARMOR_TEST_HPP
#define __LIGHTARMOR_TEST_HPP

#include "gtest/gtest.h"
#include <stdexcept>
#include <iostream>
#include "LightArmor.hpp"

using namespace std;

TEST(RangedArmorTest, StateItems) {
	Ranger* test = new Ranger();

	LightArmor* testArmor = test->AddLightArmor(5, "lightArmor");


	EXPECT_EQ(testLightArmor->getState(), false);
	test->Favorite();
	EXPECT_EQ(testLightArmor->getState(), true);
	test->UnFavorite();
	EXPECT_EQ(testLightArmor->getState(), false);
}

TEST(RangedArmorTest, getDef) {
	Ranger* test = new Ranger();

	LightArmor* testArmor = test->AddLightArmor(5, "weightlessArmor");

	EXPECT_EQ(testWeapon->getAttack(), 0);
	EXPECT_EQ(testWeapon->getDefense(), 25);
}

TEST(RangedItemTest, Display_A) {
	Ranger* test = new Ranger();

	LightArmor* testArmor = test->AddLightArmor(5, "lightArmor");

	cout << "lightArmor" << endl;
	testWeapon->Display();
	testWeapon->Favorite();
	cout << "** weightlessArmor **" << endl;
	testWeapon->Display();
}
#endif //__LIGHTARMOR_TEST_HPP
