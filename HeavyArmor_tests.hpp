#ifndef __HEAVYARMOR_TESTS_HPP
#define __HEAVYARMOR_TESTS_HPP

#include "gtest/gtest.h"
#include <stdexcept>
#include <iostream>
#include "Warrior.hpp"
#include "HeavyArmor.hpp"

using namespace std;

TEST(HeavyArmorTest, StateArmor) {
	Warrior* test = new Warrior();

	Armors* testHeavyArmor = test->AddArmor(5, "HeavyArmor");

	EXPECT_EQ(testHeavyArmor->getState(), false);
	testHeavyArmor->Favorite();
	EXPECT_EQ(testHeavyArmor->getState(), true);
	testHeavyArmor->Unfavorite();
	EXPECT_EQ(testHeavyArmor->getState(), false);
}

TEST(HeavyArmorTest, getDefAtk) {
	Warrior* test = new Warrior();

	Armors* testHeavyArmor = test->AddArmor(5, "toughtArmor");

	EXPECT_EQ(testHeavyArmor->getAttack(), 0);
	EXPECT_EQ(testHeavyArmor->getDefense(), 5);
}

TEST(HeavyArmorTest, getName) {
    Warrior* test = new Warrior();
    Armors* testHeavyArmor = test->AddArmor(5, "Metal Armor");
    EXPECT_EQ(testHeavyArmor->getName(), "Metal Armor (HA)");
}

TEST(HeavyArmorTest, Display_A) {
	Warrior* test = new Warrior();

	Armors* testHeavyArmor = test->AddArmor(5, "HevenlyArmor");

	cout << "EXPECT:" << "HevenlyArmor (HA)" << endl;
	cout << "ACTUAL:";
	testHeavyArmor->Display();
	cout << endl;
	testHeavyArmor->Favorite();
	cout << "EXPECTS: " << "\033[1;33m ** \033[0m" << "HevenlyArmor (HA)" << "\033[1;33m ** \033[0m" << endl;
	cout << "ACTUAL: ";
	testHeavyArmor->Display();
	cout << endl;
}
#endif //__HEAVYARMOR_TESTS_HPP
