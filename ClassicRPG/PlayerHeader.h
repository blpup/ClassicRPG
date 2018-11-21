#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.h> 
using namespace std;

class Player {

private:
	const int health = 100;
	const int mana = 100;
	string playerName;
	string playerClass;
	int level;
	float strength;
	float agility;
	float defence;
	float magicPower;
	float damageTaken;
	bool isAlive = true;


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
	void printName();
	void set_strength(float s);
	void set_agility(float a);
	void set_defence(float d);
	void set_magicPower(float m);
	float get_health();
	float get_strength();
	float get_agility();
	float get_defence();
	float get_magicPower();
	int get_level();
	int get_mana();
	float attack(float monsterHealth);
	float defend(float monsterAttack);
	void set_playerName();
	void set_playerClass();
};