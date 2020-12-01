#ifndef __RANGED_TESTS_HPP__
#define __RANGED_TESTS_HPP__

#include <iostream>
#include "Ranger.hpp"

using namespace std;

TEST(RangedItemTest, StatePattern) {
	Ranger* test = new Ranger();

	Weapons* testWeapon = test->AddWeapon(5, "shortBow");


	EXPECT_EQ(testWeapon->getState(), false);
	test->Favorite();
	EXPECT_EQ(testWeapon->getState(), true);
	test->UnFavorite();
	EXPECT_EQ(testWeapon->getState(), false);
}

TEST(RangedItemTest, Getters) {
	Ranger* test = new Ranger();

	Weapons* testWeapon = test->AddWeapon(25, "shortBow");

	EXPECT_EQ(testWeapon->getAttack(), 25);
	EXPECT_EQ(testWeapon->getDefense(), 0);
}

TEST(RangedItemTest, Display) {
	Ranger* test = new Ranger();

	Weapons* testWeapon = test->AddWeapon(15, "longBow");

	cout << "EXPECTS: " << "longBow" << endl;
	cout << "ACTUAL: ";
	testWeapon->Display();

	testWeapon->Favorite();
	cout << "EXPECTS: " << "\033[1;33m ** \033[0m" << "longBow" << "\033[1;33m ** \033[0m" << endl;
	cout << "ACTUAL: ";
	testWeapon->Display();
}

#endif
