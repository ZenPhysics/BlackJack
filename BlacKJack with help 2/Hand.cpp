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
<<<<<<< HEAD
	cout << "counthand was called and it returns: " ;
	return hand.size();
	cout << endl << endl;
=======
	return total;
>>>>>>> parent of d4be1c5... final commit for the night
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
