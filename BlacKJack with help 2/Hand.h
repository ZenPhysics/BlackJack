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
	void showHand();
	int getHandSize();
	int getHandValue();
	void WinLose();
	
	
	vector<Cards *> getHand();
	Hand();
	~Hand();
};

