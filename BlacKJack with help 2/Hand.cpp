#include "Hand.h"




Hand::Hand()
{
	
	vector<Cards *> vhand;
		
	
}


Hand::~Hand()
{
}

void Hand::addCard(Cards * card)
{
	
	hand.push_back(card);
}

int Hand::countHand()
{
	int total = 0;
	for (int i = 0; i < hand.size(); i++)
		{
		hand.at(i).getValue() += total;
		}
	return total;
}

int Hand::handValue()
{
	int total = 0;
	for (int i = 0; i < hand.size(); i++)
		{
		cout << endl << hand.front();
		}
	if (total = 21)
		{
		cout << "You Win!";
		}
	else if(total > 21)
		{
		cout << "you lose this round!";
		}
	else
		{
		cout << total;
		}

	return total;
}

vector<Cards*> Hand::getHand()
{
	return hand;
}
