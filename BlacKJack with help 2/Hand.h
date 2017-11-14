#pragma once
#include<string>
#include <iostream>
#include <vector>
#include "Cards.h"


class Hand
{
	vector<Cards *> hand;

public:
	int countHand();
	int handValue();
	Hand();
	~Hand();
};

