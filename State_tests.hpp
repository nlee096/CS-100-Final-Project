#ifndef __STATE_TESTS_HPP__
#define __STATE_TESTS_HPP__
#include "gtest/gtest.h"
#include <iostream>

#include "State.hpp"
#include "LockedState.hpp"
#include "UnlockedState.hpp"

TEST(StateSet, LockedGetState){
	State* test = new LockedState();
	EXPECT_EQ(test->getState(), true);
}
TEST(StateSet, LockedDisplay){
	State* test = new LockedState();
	std::cout << "EXPECTS : " << "\033[1;33m ** \033[0m" << "Locked Item Name" << "\033[1;33m ** \033[0m" << std::endl;
	std::cout << "ACTUAL : ";
	test -> Display("Locked Item Name");
	std::cout << std::endl;
}
TEST(StateSet, UnlockedGetState){
	State* test = new UnlockedState();
	EXPECT_EQ(test->getState(), false);
}
TEST(StateSet, UnlockedDisplay){
	State* test = new UnlockedState();
	std::cout << "EXPECTS : Unlocked Item Name" << std::endl;
	std::cout << "ACTUAL : ";
	test -> Display("Unlocked Item Name");
	std::cout << std::endl;
}

#endif
