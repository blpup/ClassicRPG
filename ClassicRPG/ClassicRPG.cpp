// ClassicRPG.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


void print_menu();
int pick_class();
int main()
{
	print_menu();
	int userClass = pick_class();
    return 0;
}

void print_menu() {
	cout << "Hello Welcome to D&D Math Lab!" << endl;
	cout << "This game is a text based dungeon crawller using C++."<<endl;
};
int pick_class(){
	int userClass;
	cout << "Archer - 1" << endl << "Warrior - 2" << endl << "Mage - 3" << endl << "Assassin - 4" << endl;
	cout << "Please pick a class:" << endl;
	cin >> userClass;
	while (userClass > 4 || userClass < 0) {
		cout << "Please pick a number between 1-4: ";
		cin >> userClass;
	};
	return userClass;
};
class Player {
private:
	const int health = 100;
	const int mana = 100;
	string playerName;
	int strength;
	int agility;
	int defence;
	int magicPower;



	void PrintName() {
		cout << "Hello my name is" << playerName << ".";
	};

	void set_strength(int s) {
		strength = s;
	}
	void set_agility(int a) {
		agility = a;
	}
	void set_defence(int d) {
		defence = d;
	}
	void set_magicPower(int m) {
		magicPower = m;
	}

	int get_health() {
		return health;
	}
	int get_strength() {
		return strength;
	};
	int get_agility() {
		return agility;
	};
	int get_defence() {
		return defence;
	};
	int get_magicPower() {
		return magicPower
	};
	int get_mana() {
		return mana;
	};

	int nomral_attack(int monsterHealth) {
		monsterHealth - strength * 1.5;
		return monsterHealth;
	};
	int magic_attack(int monsterHealth) {
		monsterHealth - magicPower * 2;
		return monsterHealth;
	};

};