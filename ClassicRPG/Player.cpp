#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.h> 
#include "PlayerHeader.h"
using namespace std;

void Player::printName() {
	cout << "Hello my name is" << playerName << ".";
};
void Player::set_strength(float s) {
	strength = s;
};
void Player::set_agility(float a) {
	agility = a;
};
void Player::set_defence(float d) {
	defence = d;
};
void Player::set_magicPower(float m) {
	magicPower = m;
};
float Player::get_health() {
	return health - damageTaken;
};
float Player::get_strength() {
	return strength;
};
float Player::get_agility() {
	return agility;
};
float Player::get_defence() {
	return defence;
};
float Player::get_magicPower() {
	return magicPower;
};
int Player::get_mana() {
	return mana;
};
float Player::attack(float monsterHealth) {
	monsterHealth = monsterHealth - strength * 1.5;
	return monsterHealth;
};
float Player::defend(float monsterAttack) {
	damageTaken = (defence * 4) - monsterAttack;
	if (damageTaken >= health) {
		isAlive = false;
	};
	return damageTaken;
};
void Player::set_playerName() {
	cout << "What do you want to name your character:" << endl;
	cin >> playerName;
	set_playerClass();
};
void Player::set_playerClass() {
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

