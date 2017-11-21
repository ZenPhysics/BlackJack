#pragma once
#include<string>
#include "Cards.h"
#include <iostream>
#include <vector>

using namespace::std;

class Deck
{

private:
	vector<Cards> allCards;
	vector<Cards> eligibleCards;

public:
	Deck();
	~Deck();
	void initializeDeck();
	void eligibleCards1();
	vector<Cards> getDeck();
	Cards * DealRandomCard();
	int countCardsInDeck();



};

