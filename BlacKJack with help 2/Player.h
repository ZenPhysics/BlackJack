#pragma once
#include<string>
#include "Cards.h"
#include <iostream>
#include <vector>

using namespace::std;

class Player
{

private:
	vector<Cards*> Hand;
	string name;
	int number;
	int worth;

public:
	Player(string, int, int);
	~Player();

	vector<Cards *> getHand();
	string getName();
	int makeBet();

};

