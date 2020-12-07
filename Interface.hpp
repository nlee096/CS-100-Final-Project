#ifndef __INTERFACE_HPP__
#define __INTERFACE_HPP__

#include <vector>
#include <iostream>
#include <string>

#include "UserClass.hpp"
#include "Armors.hpp"
#include "Weapons.hpp"
#include "ItemOrder.hpp"

/*
 * changes:
 * UserClass becamse UserClass* 
 * constructor with UserClass* arguement
 * */

class Interface{
	private:
		UserClass* playerClass;
	public:
		vector<Weapons*> weapons;
		vector<Armors*> armors;
		ItemOrder* organizer

		Interface(UserClass* myclass){
			playerClass = myclass;
			organizer = nullptr;
		}
		~Interface(){
			for(unsigned int i = 0; i < weapons.size(); i++){
				delete weapons.at(i); 
				/*delete weapons[i];*/
			}
			weapons.clear();
			for(unsigned int j = 0; j < armors.size(); j++){
				delete armors.at(j);
				/*delete weapons[i];*/
			}
			armors.clear();
			if(organizer != nullptr){
				delete organizer;
			}
			if(playerClass != nullptr){
				delete playerClass;
			}
		}

		void AddArmor(int stat, std::string name){
			if(name.size() < 1){
				std::cout << "Invalid name" << endl;
			}
			else{
				std::string currName;
				bool existsA = false;
				bool existsW = false;
				for(unsigned int a = 0; a < armors.size() && existsA == false; a++){
					currName = armors.at(a)->getName();
					if(currName.substr(0, currName.size()-5) == name){
						std::cout << "Item already exists in your inventory" << std:: endl;
						existsA = true;
					}
				}
				if(existA == false){
					for(unsigned int w = 0; w < weapons.size() && existsW == false; w++){
						currName = weapons.at(w)->getName();
						if(currName.substr(0, currName.size()-5) == name){
							std::cout << "Item already exists in your inventory" << std:: endl;
							existsW = true;
						}
					}
				}
				if(existsA == false && existsW == false){
					armors.push_back(playerClass -> AddArmor(stat, name));
					armors.back()->Display();
					std::cout << "\033[1;31m ATK \033[0m" << " : " << armors.back()->getAttack() << " " << "\033[1;32m DEF \033[0m" << " : " << armors.back()->getDefense() << " " << endl;
				}
			}	
		}
		void AddWeapon(int stat, std::string name){
			if(name.size() < 1){
				std::cout << "Invalid name" << endl;
			}
			else{
				std::string currName;
				bool existsA = false;
				bool existsW = false;
				for(unsigned int w = 0; w < weapons.size() && existsW == false; w++){
					currName = weapons.at(w)->getName();
					if(currName.substr(0, currName.size()-5) == name){
						std::cout << "Item already exists in your inventory" << std:: endl;
						existsW = true;
					}
				}
				if(existW == false){
					for(unsigned int a = 0; a < armors.size() && existsA == false; a++){
						currName = armors.at(a)->getName();
						if(currName.substr(0, currName.size()-5) == name){
							std::cout << "Item already exists in your inventory" << std:: endl;
							existsA = true;
						}
					}
				}
				if(existsA == false && existsW == false){
					weapons.push_back(playerClass -> AddWeapon(stat, name));
					weapons.back()->Display();
					std::cout << "\033[1;31m ATK \033[0m" << " : " << weapons.back()->getAttack() << " " << "\033[1;32m DEF \033[0m" << " : " << weapons.back()->getDefense() << " " << endl;
				}
			}
		}
		void remove(std::string name){
			if(name.size() < 1){
				std::cout << "Invalid name" << endl;
			}
			else{
				std::string currName;
				bool existsR = false;
				for(unsigned int r = 0; r < weapons.size() && existsR == false; r++){
					currName = weapons.at(r)->getName();
					if(currName.substr(0, currName.size()-5) == name){
						if(weapons.at(r)->getState() == true){
							std::cout << "item is favorited. Unfavorite to remove.";
						}
						else{
							std::cout << "Removed ";
							weapons.at(r)->Display();
							std::cout << "\033[1;31m ATK \033[0m" << " : " << weapons.at(r)->getAttack() << " " << "\033[1;32m DEF \033[0m" << " : " << weapons.at(r)->getDefense() << " " << endl;
							weapons.erase(weapons.begin() + r);
							existsR = true;
						}
					}
				}
				if(existsR == false){
					for(unsigned int r2 = 0; r2 < armors.size() && existsR == false; r2++){
						currName = armors.at(r2)->getName();
						if(currName.substr(0, currName.size()-5) == name){
							if(armors.at(r2)->getState() == true){
								std::cout << "item is favorited. Unfavorite to remove.";
							}
							else{
								std::cout << "Removed ";
								armors.at(r2)->Display();
								std::cout << "\033[1;31m ATK \033[0m" << " : " << armors.at(r2)->getAttack() << " " << "\033[1;32m DEF \033[0m" << " : " << armors.at(r2)->getDefense() << " " << endl;
								armors.erase(armors.begin() + r2);
								existsR = true;
							}
						}
					}
				}
				if(existsR == false){
					std::cout << "Item does not exist in your inventory" << std::endl;
				}
			}
		}
		void Favorite(std::string name){
			if(name.size() < 1){
				std::cout << "Invalid name" << endl;
			}
			else{
				std::string currName;
				bool existsF = false;
				for(unsigned int f = 0; f < weapons.size() && existsF == false; f++){
					currName = weapons.at(f)->getName();
					if(currName.substr(0, currName.size()-5) == name){
						if(weapons.at(f)->getState() != true){
							weapons.at(f)->Favorite();
							std::cout << "Favorited ";
							weapons.at(f)->Display();
							std::cout << "\033[1;31m ATK \033[0m" << " : " << weapons.at(f)->getAttack() << " " << "\033[1;32m DEF \033[0m" << " : " << weapons.at(f)->getDefense() << " " << endl;
							existsF = true;
						}
						else{
							std::cout << "Item is already favorited." << std::endl;
						}
					}
				}
				if(existsF == false){
					for(unsigned int f2 = 0; f2 < armors.size() && existsF == false; f2++){
						currName = armors.at(f2)->getName();
						if(currName.substr(0, currName.size()-5) == name){
							if(armors.at(f2)->getState() != true){
								armors.at(f2)->Favorite();
								std::cout << "Favorited ";
								armors.at(f2)->Display();
								std::cout << "\033[1;31m ATK \033[0m" << " : " << armors.at(f2)->getAttack() << " " << "\033[1;32m DEF \033[0m" << " : " << armors.at(f2)->getDefense() << " " << endl;
								existsF = true;
							}
							else{
								std::cout << "Item is already favorited." << std::endl;
							}
						}
					}
				}
				if(existsF == false){
					std::cout << "Item does not exist in your inventory" << std::endl;
				}
			}
		}
		void Unfavorite(std::string name){
			if(name.size() < 1){
				std::cout << "Invalid name" << endl;
			}
			else{
				std::string currName;
				bool existsU = false;
				for(unsigned int u = 0; u < weapons.size() && existsU == false; u++){
					currName = weapons.at(u)->getName();
					if(currName.substr(0, currName.size()-5) == name){
						if(weapons.at(u)->getState() == true){
							weapons.at(u)->Unfavorite();
							std::cout << "Unfavorited ";
							weapons.at(u)->Display();
							std::cout << "\033[1;31m ATK \033[0m" << " : " << weapons.at(u)->getAttack() << " " << "\033[1;32m DEF \033[0m" << " : " << weapons.at(u)->getDefense() << " " << endl;
							existsU = true;
						}
						else{
							std::cout << "Item is already unfavorited." << std::endl;
						}
					}
				}
				if(existsU == false){
					for(unsigned int u2 = 0; u2 < armors.size() && existsU == false; u2++){
						currName = armors.at(u2)->getName();
						if(currName.substr(0, currName.size()-5) == name){
							if(armors.at(u2)->getState() == true){
								armors.at(u2)->Unfavorite();
								std::cout << "Unfavorited ";
								armors.at(u2)->Display();
								std::cout << "\033[1;31m ATK \033[0m" << " : " << armors.at(u2)->getAttack() << " " << "\033[1;32m DEF \033[0m" << " : " << armors.at(u2)->getDefense() << " " << endl;
								existsU = true;
							}
							else{
								std::cout << "Item is already unfavorited." << std::endl;
							}
						}
					}
				}
				if(existsU == false){
					std::cout << "Item does not exist in your inventory" << std::endl;
				}
			}
		}
		void Display(int order){
			if(order != 1 && order != 2){
				std::cout << "Invalid input" << std::endl;
			}
			else{
				if(order == 1){
					organizer = new HighestAttack();
					organizer -> Display(weapons, armors);
					delete organizer;
				}
				else if(order == 2){
					organizer = new HighestDefense();
					organizer -> Display(weapons, armors);
					delete organizer;
				}
			}
		}
};
#endif
