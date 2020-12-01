#ifndef __HEAVYARMOR_TESTS_HPP
#define __HEAVYARMOR_TESTS_HPP

#include "gtest/gtest.h"
#include <stdexcept>
#include <iostream>
#include "Warrior.hpp"
#include "HeavyArmor.hpp"

using namespace std;

TEST(WarriorArmorTest, StateArmor) {
	Warrio* test = new Warrio();

	HeavyArmor* testHeavyArmor = test->AddHeavyArmor(5, "HeavyArmor");


	EXPECT_EQ(testHeavyArmor->getState(), false);
	test->Favorite();
	EXPECT_EQ(testHeavyArmor->getState(), true);
	test->UnFavorite();
	EXPECT_EQ(testHeavyArmor->getState(), false);
}

TEST(WarriorArmorTest, getDefAtk) {
	Warrio* test = new Warrio();

	HeavyArmor* testHeavyArmor = test->AddHeavyArmor(5, "toughtArmor");

	EXPECT_EQ(testHeavyArmor->getAttack(), 0);
	EXPECT_EQ(testHeavyArmor->getDefense(), 5);
}

TEST(WarriorArmorTest, Display_A) {
	Warrio* test = new Warrio();

	HeavyArmor* testHeavyArmor = test->AddHeavyArmor(5, "HevenlyArmor");

	cout << "EXPECT:" << "HevenlyArmor" << endl;
	cout << "ACTUAL:";
	testHeavyArmor->Display();
	testHeavyArmor->Favorite();
	cout << "EXPECTS: " << "\033[1;33m ** \033[0m" << "HevenlyArmor" << "\033[1;33m ** \033[0m" << endl;
	cout << "ACTUAL: ";
	testHeavyArmor->Display();
}
#endif //__HEAVYARMOR_TESTS_HPP
