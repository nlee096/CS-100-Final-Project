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

int main(int argc, char** argv) {

	int userClass;
	cout << "Enter user Class(Ranger=1,Warrior=2)";
	cin >> userClass;
	if (userClass == 1)
		cout << "Ranger";
	else
		cout << "Warrior";
	int opt;

	cout << "\n*****Inventory Menu*******\n 1.Add an armor\n 2.Add a weapon\n 3.Remove an item\n 4.Favorite an item\n 5.Unfavorite an item\n 6. Display\n 7.Close Inventory\n 8.Exit\nEnter option to select operation\n" << endl;

	cin >> opt;
	map<string, int> armor;
	map<string, int> weapon;
	map<int, string> w;
	map<int, string> a;
	set<string> fav;
	string ar;
	string stat;
	for (;;)

	{

		switch (opt) //creating menu

		{

		case 1:

			cout << "Enter armor name : (user inputs string that may include spaces, followed by enter)" << endl;
			cin >> ar;
			cout << "Enter armor defense stat : (user enters int followed by enter)" << endl;
			cin >> stat;
			cout << ar << " DEF : " << stat << " has been stored in your inventory!" << endl;
			armor[ar] = stat;
			a[stat] = ar;
			break;

		case 2:

			cout << "Enter weapon name : (user inputs string that may include spaces, followed by enter)" << endl;
			cin >> ar;
			cout << "Enter weapon attack stat : (user enters int followed by enter)" << endl;
			cin >> stat;
			cout << ar << " ATK : " << stat << " has been stored in your inventory!" << endl;
			weapon[ar] = stat;
			w[stat] = ar;
			break;

		case 3:

			cout << " Enter name of item to remove : (user inputs string that may include spaces, followed by enter)\n" << endl;
			cin >> ar;
			if (armor.find(ar) != armor.end()) {
				cout << ar << " DEF :" << armor[ar] << "has been removed from your inventory!\n";
				armor.erase(ar);

			}
			else if (weapon.find(ar) != weapon.end()) {
				cout << ar << " ATK :" << weapon[ar] << "has been removed from your inventory!\n";
				weapon.erase(ar);
			}
			break;

		case 4:

			cout << " Enter name of item to favorite : (user inputs string that may include spaces, followed by enter)\n" << endl;
			cin >> ar;
			fav.insert(ar);
			break;

		case 5:

			cout << " Enter name of item to unfavorite : (user inputs string that may include spaces, followed by enter)\n" << endl;
			cin >> ar;
			if (fav.find(ar) != fav.end())
				fav.earse(ar);
			break;

		case 6:

			cout << " Display order :\n1. Highest -> lowest ATK\n2. Highest -> lowest DEF\n3. Weapons only\n4. Armors only\n5. Weapons and Armors\n" << endl;
			for (auto it = w.begin(); it != w.end(); it++)
				cout << *it << " ";
			cout << endl;
			for (auto it = a.begin(); it != a.end(); it++)
				cout << *it << " ";
			cout << endl;
			break;

		case 7:

			cout << " Back to Inventory Menu\n" << endl;

			cout << " Closing (user class) Inventory \n" << endl;

			break;

		case 8:

			cout << "End of program" << endl;

			return -1;

		}

		cout << "\n*****Inventory Menu*******\n 1.Add an armor\n 2.Add a weapon\n 3.Remove an item\n 4.Favorite an item\n 5.Unfavorite an item\n 6. Display\n 7.Close Inventory\n 8.Exit\nEnter option to select operation\n" << endl;

		cin >> opt;

	}

	return 0;

}
