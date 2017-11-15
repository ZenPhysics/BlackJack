#include "Player.h"
#include <numeric>
#include "time.h"
#include <vector>
#include "Deck.h"
#include "Cards.h"
#include "Hand.h"

using  namespace::std;

Player::Player(string playerName, int playerNumber, int playerWorth, Hand * aHand)
{
	name = playerName;
	number = playerNumber;
	worth = playerWorth;
	ahand = aHand;
	InitializeHand();
}


Player::~Player()
{
}




string Player::getName()
{
	return name;
}


int Player::makeBet()
{
	int betTotal;
	cout << "Time to make a bet!  Enter your bet: " << endl;
	cin >> betTotal;
	cout << "Your Bet was: " << betTotal << endl;
	


	return betTotal;
}


vector<Cards*> Player::getHand()
{
	//return vector<Cards*> newHand;
}

void Player::drawCard()
{
		Cards * aCard = deck->DealRandomCard();
		aCard->SetState("inPlay");
		hand.push_back(aCard);
	
}

void Player::InitializeHand()
{
	drawCard();
	drawCard();
}








