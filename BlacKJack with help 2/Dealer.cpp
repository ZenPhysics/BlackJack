#include "Dealer.h"
#include <time.h>
#include "Deck.h"
#include "Hand.h"



Cards * Dealer::dealCard()
{
	//get all eligible cards
	vector<Cards *> eligibleCards;
	//get allcards
	vector<Cards *> allCards;
	//vector<Cards *> Hand;
	int max = 52;
	for (int i = 0; i < max; i++) 
		{
		
			eligibleCards.push_back(allCards.at(i));


		}

		srand(time(NULL));
		int r = rand() % eligibleCards.size();

		Cards * dealtCard = eligibleCards.at(r);


		dealtCard->SetState("inPlay");
		dealtCard->SetVisible("Visible");
		return dealtCard;
}


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
		//dealHand(i);
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
		Hand thehand = Hand();

		

		players.push_back(Player(inputName, i, 100, thehand));
		
		if (!thehand.getHand().empty())
		{
			cout << "didnt iterate" << endl;

		}
		else {
			for (int i = 0; i < 2; i++)
			{
				thehand.addCard(deck.DealRandomCard());
				thehand.getHand().size();
			}
		}
	}
	

	//return how many players
	cout << endl << "there are: " << numberOfPLayers << " Players" << endl << "******************" << endl;
	//cout << endl << "Vector Size: " << players.size() << endl;

	//returns number of players
	return numberOfPLayers;
}

void Dealer::playerTurn()
{
	cout << "******************" << endl << "It is your turn.  What would you like to do? " << endl;
	cout << "1: Make a bet! " << endl
		 << "2: Hit!" << endl 
		 << "3: Stay" <<endl 
		 << "4: split" << endl 
		 << "5: double" << endl << endl;
	
	int turnChoice;
	cin >> turnChoice;

	switch (turnChoice)
	{
	case 1: 
		
		break;

	case 2:

		//Draw a card, count the value of hand, if 21 --> win if <21 --> lose else return to choice
		break;

	case 3:

		
		//count the value of the hand  if 21 --> win if <21 --> lose -->next player
		break;

	case 4:

		break;

	case 5:

		break;

		return ;
	}
	
	

	

}

Player Dealer::getPlayer(int i)
{
	if(!players.empty())
		return players[i];

}

Dealer::Dealer()
{
	deck = Deck();
	players = vector<Player>();
}


Dealer::~Dealer()
{
}

