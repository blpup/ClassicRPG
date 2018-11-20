#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.h> 
using namespace std;

//Print the Backstory
class Game {
public:
	int choice = 0;
	bool playing = true;
	string fileName = "characters.txt";
	void MainMenu();
	void ShopMenu(int characterLevel);
};
void Game::MainMenu() {
	cout << "1.) Travel" << endl;
	cout << "2.) Shop" << endl;
	cout << "3.) Level Up" << endl;
	cout << "4.) Rest" << endl;
	cout << "5.) Quit" << endl;
};

void Game::ShopMenu(int characterLevel) {
	if (characterLevel > 0) {

	}
};