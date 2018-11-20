#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.h> 
using namespace std;


class Monster {
private:
	int health = 100;
	int mana = 100;
	string monsterName;
	string monsterClass;
	int level;
	float strength;
	float agility;
	float defence;
	float magicPower;
	float damageTaken;
	bool isAlive = true;
public:
	float attack(float playerHealth) {
		playerHealth = playerHealth - strength * 1.5;
		return playerHealth;
	};
	float defend(float playerAttack) {
		damageTaken = (defence * 4) - playerAttack;
		if (damageTaken >= health) {
			isAlive = false;
		};
		return damageTaken;
	};
};