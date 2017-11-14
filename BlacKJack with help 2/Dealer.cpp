#include "Dealer.h"



void Dealer::getDeck()
{
}

void Dealer::DealInitialCards(int numberOfPlayers)
{
	if (numberOfPlayers == 0)
	{
		cout << "No players were made" << endl;
	}
	for (int i = 0; i < numberOfPlayers; i++)
	{
		dealHand(i);
		cout << endl << "player at " << i << " has a hand!" << endl;
	}
}

int Dealer::initializePlayers()
{
	//initialize players
	int numberOfPLayers;
	cout << "******************" << endl;
	cout << "welcome to BlackJack" << endl << endl;
	cout << "Choose how many players" << endl;

	cin >> numberOfPLayers;


	//Create PLayers
	for (int i = 0; i < numberOfPLayers; i++)
	{
		string inputName;
		cout << "Name?";
		cin >> inputName;

		players.push_back(Player(inputName, i, 100));
		
	}
	//return how many players
	cout << endl << "there are: " << players.size() << " Players" << endl << "******************" << endl;

	//returns number of players
	return numberOfPLayers;
}

void Dealer::playerTurn()
{
	cout << "******************" << endl << "It is your turn.  What would you like to do? " << endl;
	cout << "a: Make a bet! " << endl
		 << "b: Hit!" << endl 
		 << "c: Stay" <<endl 
		 << "d: split" << endl 
		 << "e: double" << endl << endl;
}

Player * Dealer::getPlayer(int playerNumber)
{
	Player * player = &players.at(playerNumber);
	return player;
}

Dealer::Dealer()
{
	deck = Deck();
}


Dealer::~Dealer()
{
}
