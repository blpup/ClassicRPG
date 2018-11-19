// ClassicRPG.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;




void print_menu();

class Player {

private:
	const int health = 100;
	const int mana = 100;
	string playerName;
	string playerClass;
	float strength;
	float agility;
	float defence;
	float magicPower;
	float damageTaken;
	

	void set_warrior() {
		set_strength(20);
		set_defence(15);
		set_agility(5);
		set_magicPower(1);
		playerClass = "warrior";
	};
	void set_archer() {
		set_strength(20);
		set_defence(1);
		set_agility(15);
		set_magicPower(5);
		playerClass = "archer";
	}
	void set_wizard() {
		set_strength(5);
		set_defence(1);
		set_agility(10);
		set_magicPower(25);
		playerClass = "wizard";
	}
	void set_assassin() {
		set_strength(15);
		set_defence(1);
		set_agility(20);
		set_magicPower(5);
		playerClass = "assassin";
	}
public:
	Player() {
		set_playerName();
	}
	void PrintName() {
		cout << "Hello my name is" << playerName << ".";
	};

	void set_strength(float s) {
		strength = s;
	};
	void set_agility(float a) {
		agility = a;
	};
	void set_defence(float d) {
		defence = d;
	};
	void set_magicPower(float m) {
		magicPower = m;
	};
	float get_health() {
		int health;
	};
	float get_strength() {
		return strength;
	};
	float get_agility() {
		return agility;
	};
	float get_defence() {
		return defence;
	};
	float get_magicPower() {
		return magicPower;
	};
	int get_mana() {
		return mana;
	};
	float attack(float monsterHealth) {
		monsterHealth = monsterHealth - strength * 1.5;
		return monsterHealth;
	};
	float defend(float monsterAttack) {
		damageTaken = (defence * 4) - monsterAttack;
		return damageTaken;
	};

	void set_playerName() {
		cout << "What do you want to name your character:" << endl;
		cin >> playerName;
		set_playerClass();
	};
	void set_playerClass() {
		cout << "Hello, " << playerName << ". Please pick a class you want your character to be:" << endl;
		int userClass;
		cout << "Archer - 1" << endl << "Warrior - 2" << endl << "Wizard - 3" << endl << "Assassin - 4" << endl;
		cout << "Please pick a class:" << endl;
		cin >> userClass;
		while (userClass > 4 || userClass < 0) {
			cout << "Please pick a number between 1-4: ";
			cin >> userClass;
		};
		switch (userClass) {
		case 1:
			set_archer();
			break;
		case 2:
			set_warrior();
			break;
		case 3:
			set_wizard();
			break;
		case 4:
			set_assassin();
			break;
		};
		cout << "You have decided to pick " << playerClass << "." << endl;
	};


};



int main()
{
	//Print the main menu
	print_menu();

	//Print the classes and ask the user for input for the which class they want
	

	//Init the player class
	Player player;
	

	cout << player.get_defence() << endl;
    return 0;
};

void print_menu() {
	cout << "Hello Welcome to D&D Math Lab!" << endl;
	cout << "This game is a text based dungeon crawller using C++."<<endl;
};