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
	
	void takeCard(Cards * card);
	int countHand();
	int handValue();
	Hand(vector<Cards *> hand, int playerNumber);
	~Hand();
};

