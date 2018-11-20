// ClassicRPG.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.h> 
#include "PlayerHeader.h"
using namespace std;




void print_menu();
void get_story(string name, string characterClass);




int main()
{
	//Print the main menu
	print_menu();

	//Print the classes and ask the user for input for the which class they want
	
	get_story("bob","warrior");
	//Init the player class
	//Player player;
	

	
    return 0;
};

//Print the menu
void print_menu() {
	cout << "Hello Welcome to D&D Math Lab!" << endl;
	cout << "This game is a text based dungeon crawller using C++."<<endl;
};

//Print the Backstory
void get_story(string name, string characterClass) {
	string opening1 = "Hello " + name + ". Welcome to the World of Ragnor!";
	string opening2 = "You are a "+ characterClass +" for the Queen of Yarl.";
	string opening3 = "Twelve years ago, the goblins attacked and killed most of humanity.";
	string opening4 = "The only line of defense agaisnt the goblin forces is the Kingdom of Yarl.";
	string opening5 = "This is where your jounery begins...";
	int x = 0;
	while (opening1[x] != '\0')
	{
		cout << opening1[x];
		Sleep(100);
		x++;
	};
	cout << endl;
	x = 0;
	while (opening2[x] != '\0')
	{
		cout << opening2[x];
		Sleep(100);
		x++;
	};
	cout << endl;
	x = 0;
	while (opening3[x] != '\0')
	{
		cout << opening3[x];
		Sleep(100);
		x++;
	};
	cout << endl;
};

//Creates a dungeon that scales to player level.
void CreateDungeon(int playerLevel) {

}