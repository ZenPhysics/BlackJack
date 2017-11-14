#pragma once
#include<string>
#include "Cards.h"
#include <iostream>
#include <vector>

using namespace::std;

class Player
{

private:
	vector<Cards*> hand;
	string name;
	int number;
	int worth;

public:
	Player(string, int, int, vector<Cards *> hand);
	~Player();

	vector<Cards *> getHand();
	string getName();
	int makeBet();

};

