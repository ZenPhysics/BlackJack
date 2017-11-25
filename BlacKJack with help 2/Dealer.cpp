#include "Dealer.h"
#include <time.h>
#include "Deck.h"
#include "Hand.h"
#include <iostream>

using namespace::std;

int numberOfPLayers;


Dealer::Dealer()
{
	deck = Deck();
	players = vector<Player>();

	//deck.initializeDeck();
	initializePlayers();
}


Cards * Dealer::dealCard()
{
	return deck.DealRandomCard();
}

void Dealer::DealInitialCards(int numberOfPlayers)
{
	if (numberOfPlayers == 0)
	{
		cout << "No players were made" << endl;
	}
	for (int i = 0; i < numberOfPlayers; i++)
	{
		//dealHand(i);
		cout << endl << "player at " << i << " has a hand!" << endl;
	}
}

void Dealer::initializePlayers()
{
	//initialize players
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
		Hand thehand = Hand();



		for (int j = 0; j < 2; j++)
		{
			thehand.addCard(dealCard());
			//thehand.getHandSize();
		}


		players.push_back(Player(inputName, i, 100, thehand));
	}
}

void Dealer::playerTurn(int i)
{
	Player p = getPlayer(i);
	cout << endl << "It is player: " << i+1 << endl;
	p.getPlayerHand().countHand();
	cout << endl;

	p.getPlayerHand().showHand();

	cout << "your cards are worth: ";
	cout << p.getPlayerHand().getHandValue() << endl;

	cout << endl << "******************" << endl << "It is your turn.  What would you like to do? " << endl;
	cout << "1: Hit! " << endl
		 << "2: Stay!" << endl;
		
	


		int turnChoice;
		cin >> turnChoice;

		switch (turnChoice)
		{
		case 1:

			cout << endl << "You Hit!!!" << endl;
			p.getPlayerHand().addCard(dealCard());
			p.getPlayerHand().countHand();
			//getPlayer(i).getPlayerHand().showHand();
			//getPlayer(i).getPlayerHand().handValue();
			//getPlayer(i).getPlayerHand().WinLose();

			break;

		case 2:

			//end the turn
			//start the next turn
			cout << endl << "you decided to stay" << endl;
			break;



			return;
		}

	}

void Dealer::turnsInGame()
{
	for (int i = 0; i < numberOfPLayers; i++)
	{
		playerTurn(i);
	}
}

	



int Dealer::getPlayerCount()
{
	//int numberOfPlayers = players.size();

	//return how many players
	cout << endl << "there are: " << numberOfPLayers << " Players" << endl << "******************" << endl;
	//cout << endl << "Vector Size: " << players.size() << endl;

	//returns number of players
	return numberOfPLayers;
}

Player Dealer::getPlayer(int i)
{
	if (!players.empty())
	{
		return players[i];
		//cout << endl << "player number: " << i << endl;	
	}

	else
	{
		
		cout << endl << "no players" << endl;
		
	}
	
}

Deck Dealer::getDealersDeck()
{
	return deck;
}


Dealer::~Dealer()
{
}

