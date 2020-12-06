#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
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
	UserClass* setClass;
	string myClass = "";
		while (validInput == false) {
			cout << "Enter user Class (Ranger = 1, Warrior = 2) : ";
			cin >> userClass;
			if (userClass == 1) {
				myClass = "******* Ranger";
				validInput = true;
				setClass = new Ranger();
			}
			else if (userClass == 2) {
				myClass = "******* Warrior";
				validInput = true;
				setClass = new Warrior();
			}
			else {
				cout << "invalid class";
				validInput = false;
			}
		}

	int opt = 0;
	string name;
	int stat;
	Interface* controlPanel = new Interface();
	while (opt != 7) {
		cout << myClass << "Inventory Menu *******\n 1.Add an armor\n 2.Add a weapon\n 3.Remove an item\n 4.Favorite an item\n 5.Unfavorite an item\n 6.Display\n 7.Close Inventory\nEnter option to select operation:\n" << endl;
		cin >> opt;
		switch (opt) { /* menu options*/
		case 1:

			cout << "Enter armor name :" << endl;
			cin.ignore();
			getline(cin, name);
			cout << "Enter armor defense stat :" << endl;
			cin >> stat;
			setClass->AddArmor(stat, name);
			break;

		case 2:
			cout << "Enter weapon name :" << endl;
			cin.ignore();
			getline(cin, name);
			cout << "Enter weapon attack stat :" << endl;
			cin >> stat;
			setClass->AddWeapon(stat, name);
			
			break;

		case 3:

			cout << " Enter name of item to remove : " << endl;
			cin.ignore();
			getline(cin, name);
			controlPanel->remove(name);
			break;

		case 4:

			cout << " Enter name of item to favorite :" << endl;
			cin.ignore();
			getline(cin, name);
			controlPanel->Favorite(name);
			break;

		case 5:
			cout << " Enter name of item to Unfavorite :" << endl;
			cin.ignore();
			getline(cin, name);
			controlPanel->Unfavorite(name);
			break;

		case 6:
			bool canDo = false;
			while (canDo == false) {
				cout << " Display order :\n1. Highest -> lowest ATK \n2. Highest -> lowest DEF \n3.Back to Inventory Menu" << endl;
				int displayOrder;
				cin >> displayOrder;
				if (displayOrder == 1 || displayOrder == 2) {
					controlPanel->Display(displayOrder);
					canDo = true;
				}
				else if (displayOrder == 3) {
					canDo = true;
				}
				else {
					cout << "invalid input" << endl;
				}
			}
			break;

		case 7:
			cout << "Closing" << myClass << "Inventory Menu *******" << endl;
			cout << "please rate 5 *" << endl;
			/*return 0;*/
			break;

		default:
			cout << "Invalid option" << endl;
		}

	}

	return 0;

}
