#include "Player.h"
#include <numeric>
#include "time.h"
#include <vector>
#include "Deck.h"
#include "Cards.h"
#include "Hand.h"

using  namespace::std;

Player::Player(string playerName, int playerNumber, int playerWorth, Hand Hand)
{
	name = playerName;
	number = playerNumber;
	worth = playerWorth;
	hand = Hand;

}


Player::~Player()
{
}




string Player::getName()
{
	return name;
}


/*int Player::makeBet()
{
	int betTotal;
	cout << "Time to make a bet!  Enter your bet: " << endl;
	cin >> betTotal;
	cout << "Your Bet was: " << betTotal << endl;
	


	return betTotal;
}*/

/*Hand Player::playerGetHand()
{
	return hand;
}*/

Hand Player::getPlayerHand() {
	cout << endl <<"getHand returns hand" << endl;
	return hand;
}












