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
	int countHand();
	int handValue();
	vector<Cards *> getHand();
	Hand();
	~Hand();
};

