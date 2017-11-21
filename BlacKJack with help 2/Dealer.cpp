#include "Dealer.h"
#include <time.h>
#include "Deck.h"
#include "Hand.h"
#include <iostream>

using namespace::std;

int numberOfPLayers;

/*Cards * Dealer::dealCard()
{
	srand(time(NULL));
	vector<Cards*> allCards;

	

	//Deck deck = Deck();
	//deck.getAllCards();

	cout << " the allcards vector is: " << allCards.size();

	if (!allCards.empty())
	{
		int r = rand() % 52;
		cout << "the random number is: " << r << endl;
	}
	else
	{
		cout << endl << "allcards not instantiated" << endl;
	}

		//Cards * dealtCard = allCards.at(15);


		//dealtCard->SetState("inPlay");
		//dealtCard->SetVisible("Visible");
		//return dealtCard;

	
}*/



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

		if (!thehand.getHand().empty())
		{
			cout << "didnt iterate" << endl;

		}
		else {
			for (int i = 0; i < 2; i++)
			{
				thehand.addCard(dealCard());
				thehand.getHandSize();
			}
		}

		players.push_back(Player(inputName, i, 100, thehand));
	}
}

void Dealer::playerTurn(int i)
{
	cout << endl << "******************" << endl << "It is your turn.  What would you like to do? " << endl;
	cout << "1: Hit! " << endl
		 << "2: Stay!" << endl;
		
	
	int turnChoice;
	cin >> turnChoice;

	switch (turnChoice)
	{
	case 1: 
		
		getPlayer(i).getPlayerHand().addCard(dealCard());
		getPlayer(i).getPlayerHand().showHand();
		break;

	case 2:

		//Draw a card, count the value of hand, if 21 --> win if <21 --> lose else return to choice
		break;



		return ;
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
		cout << endl << "player number: " << i;	
	}

	else
	{
		cout << endl << "no players" << endl;
	}
	return players[i];
}

Deck Dealer::getDealersDeck()
{
	return deck;
}


Dealer::~Dealer()
{
}

