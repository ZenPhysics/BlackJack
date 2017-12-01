#pragma once
#include<string>
#include "Cards.h"
#include <iostream>
#include <vector>
#include "Deck.h"
#include "Hand.h"

using namespace::std;

class Player
{

private:
	//vector<Cards*> hand;
	string name;
	int number;
	int worth;
	Hand hand;
	int playerScore;

	

public:
	Player(string, int, int, Hand, int);
	~Player();
	string getName();
	Hand * getPlayerHand();
	void DrawCard();
};

