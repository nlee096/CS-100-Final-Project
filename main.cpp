#include <iostream>
#include <vector>
#include <string>
#include "UserClass.hpp"
#include "Warrior.hpp"
#include "Ranger.hpp"
#include "State.hpp"
#include "Armors.hpp"
#include "LightArmor.hpp"
#include "HeavyArmor.hpp"
#include "Weapons.hpp"
#include "Melee.hpp"
#include "Ranged.hpp"

int main() {

	int userClass;
	bool validInput = false;
	Interface* controlPanel;
	std::string myClass = "";
		while (validInput == false) {
			std::cout << "Enter user Class (Ranger = 1, Warrior = 2) : ";
			std::cin >> userClass;
			if (userClass == 1) {
				myClass = "******* Ranger";
				validInput = true;
				controlPanel = new Interface(new Ranger());
			}
			else if (userClass == 2) {
				myClass = "******* Warrior";
				validInput = true;
				controlPanel = new Interface(new Warrior());
			}
			else {
				std::cout << "invalid class";
				validInput = false;
			}
		}

	int opt = 0;
	std::string name;
	int stat;
	while (opt != 7) {
		std::cout << myClass << "Inventory Menu *******\n 1.Add an armor\n 2.Add a weapon\n 3.Remove an item\n 4.Favorite an item\n 5.Unfavorite an item\n 6.Display\n 7.Close Inventory\nEnter option to select operation:\n" << endl;
		std::cin >> opt;
		switch (opt) { /* menu options*/
		case 1:

			std::cout << "Enter armor name :" << std::endl;
			std::cin.ignore();
			std::getline(std::cin, name);
			std::cout << "Enter armor defense stat :" << std::endl;
			std::cin >> stat;
			setClass->AddArmor(stat, name);
			break;

		case 2:
			std::cout << "Enter weapon name :" << std::endl;
			std::cin.ignore();
			std::getline(std::cin, name);
			std::cout << "Enter weapon attack stat :" << std::endl;
			std::cin >> stat;
			setClass->AddWeapon(stat, name);
			
			break;

		case 3:

			std::cout << " Enter name of item to remove : " << std::endl;
			std::cin.ignore();
			std::getline(std::cin, name);
			controlPanel->remove(name);
			break;

		case 4:

			std::cout << " Enter name of item to favorite :" << std::endl;
			std::cin.ignore();
			std::getline(std::cin, name);
			controlPanel->Favorite(name);
			break;

		case 5:
			std::cout << " Enter name of item to Unfavorite :" << std::endl;
			std::cin.ignore();
			std::getline(std::cin, name);
			controlPanel->Unfavorite(name);
			break;

		case 6:
			bool canDo = false;
			while (canDo == false) {
				std::cout << " Display order :\n1. Highest -> lowest ATK \n2. Highest -> lowest DEF \n3.Back to Inventory Menu" << std::endl;
				int displayOrder;
				std::cin >> displayOrder;
				if (displayOrder == 1 || displayOrder == 2) {
					controlPanel->Display(displayOrder);
					canDo = true;
				}
				else if (displayOrder == 3) {
					canDo = true;
				}
				else {
					std::cout << "invalid input" << std::endl;
				}
			}
			break;

		case 7:
			std::cout << "Closing" << myClass << "Inventory Menu *******" << std::endl;
			std::cout << "please rate 5 *" << std::endl;
			/*return 0;*/
			break;

		default:
			std::cout << "Invalid option" << std::endl;
		}

	}

	return 0;

}
