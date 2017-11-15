#pragma once
#include<string>
#include "Cards.h"
#include <iostream>
#include <vector>
#include "Deck.h"

using namespace::std;

class Player
{

private:
	vector<Cards*> hand;
	string name;
	int number;
	int worth;
	Hand * ahand;
	Deck * deck;
	

public:
	Player(string, int, int, Hand *);
	~Player();

	vector<Cards *> getHand();
	void drawCard();
	void InitializeHand();
	string getName();
	int makeBet();

};

