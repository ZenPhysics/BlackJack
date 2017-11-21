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
	//Deck * deck;
	

public:
	Player(string, int, int, Hand);
	~Player();
	string getName();
	int makeBet();
	//vector<Cards*> playerGetHand();
	Hand getHand();

};

