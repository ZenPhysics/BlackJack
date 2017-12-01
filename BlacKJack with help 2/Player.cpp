#include "Player.h"
#include <numeric>
#include "time.h"
#include <vector>
#include "Deck.h"
#include "Cards.h"
#include "Hand.h"

using  namespace::std;

Player::Player(string playerName, int playerNumber, int playerWorth, Hand Hand, int score)
{
	name = playerName;
	number = playerNumber;
	worth = playerWorth;
	hand = Hand;
	playerScore = score;


}
void Player::DrawCard()
{
	//hand.addCard();
}

Player::~Player()
{
}


string Player::getName()
{
	return name;
}


Hand * Player::getPlayerHand() {

	return &hand;
}












