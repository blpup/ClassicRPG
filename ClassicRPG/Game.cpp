#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.h>
#include "PlayerHeader.h"
using namespace std;

//Print the Backstory
class Game {
public:
	Game() {
		Player player;
	}
	int choice = 0;
	bool playing = true;
	string characterFileName = "characters.txt";
	string itemFileName = "items.txt";
	void MainMenu(Player player);
	void ShopMenu(int characterLevel);
	bool Quit(bool playing);
};
void Game::MainMenu(Player player) {
	//Print the menu
	cout << "1.) Travel" << endl;
	cout << "2.) Shop" << endl;
	cout << "3.) Level Up" << endl;
	cout << "4.) Rest" << endl;
	cout << "5.) Quit" << endl;

	//Get user input for menu option
	int userInput;
	cout << "Select an option: ";
	cin >> userInput;

	//User input validation
	while (userInput < 0 || userInput > 5) {
		cout << "Please select an option between 1-5" << endl;
		cout << "Select an option: ";
		cin >> userInput;
	};

	//Fire function according to user input
	switch (userInput) {
	case 1:
		break;
	case 2:
		ShopMenu(player.get_level());
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		playing = Quit(playing);
		break;
	}
};

void Game::ShopMenu(int characterLevel) {
	if (characterLevel > 0) {

	}
};

bool Game::Quit(bool playing) {
	playing = false;
	return playing;
}