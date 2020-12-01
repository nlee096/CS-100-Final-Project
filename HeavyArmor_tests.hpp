fndef __HEAVYARMOR_TEST_HPP
#define __HEAVYARMOR_TEST_HPP

#include "gtest/gtest.h"
#include <stdexcept>
#include <iostream>
#include "Warrior.hpp"
#include "HeavyArmor.hpp"

using namespace std;

TEST(RangedArmorTest, StateArmor) {
	Warrio* test = new Warrio();

	HeavyArmor* testArmor = test->AddHeavyArmor(5, "HeavyArmor");


	EXPECT_EQ(testHeavyArmor->getState(), false);
	test->Favorite();
	EXPECT_EQ(testHeavyArmor->getState(), true);
	test->UnFavorite();
	EXPECT_EQ(testHeavyArmor->getState(), false);
}

TEST(RangedArmorTest, getDefArmor) {
	Warrio* test = new Warrio();

	HeavyArmor* testArmor = test->AddHeavyArmor(5, "toughtArmor");

	EXPECT_EQ(testWeapon->getAttack(), 0);
	EXPECT_EQ(testWeapon->getDefense(), 50);
}

TEST(RangedItemTest, Display_A) {
	Warrio* test = new Warrio();

	HeavyArmor* testArmor = test->AddHeavyArmor(5, "HevenlyArmor");

	cout << "HeavyArmor" << endl;
	testWeapon->Display();
	testWeapon->Favorite();
	cout << "** toughtArmor **" << endl;
	testWeapon->Display();
}
#endif //__HEAVYARMOR_TEST_HPP
