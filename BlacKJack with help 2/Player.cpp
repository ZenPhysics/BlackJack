#include "Player.h"
#include <numeric>
#include "time.h"

using  namespace::std;


Player::Player(string playerName, int playerNumber, int playerWorth, vector<Cards *> hand)
{
	name = playerName;
	number = playerNumber;
	worth = playerWorth;
	vector<Cards *> newHand = hand;
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
//	return vector<Cards*> newHand;
}








