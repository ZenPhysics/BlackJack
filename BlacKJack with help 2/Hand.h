#pragma once
#include<string>
#include <iostream>
#include <vector>
#include "Cards.h"


class Hand
{
	vector<Cards *> hand;
	int playerNumber;

public:
	
	void addCard(Cards * card);
	void countHand();
	void handValue();
	int getHandSize();
	int getHandValue();
	vector<Cards *> getHand();
	Hand();
	~Hand();
};

