#include "Hand.h"




Hand::Hand()
{
	
	vector<Cards *> hand;
		
	
}


Hand::~Hand()
{
}

void Hand::showHand()
{
	for (int i = 0; i < getHandSize(); i++)
	{
		hand[i]->showCard();
		cout << " ";
	}
}

void Hand::addCard(Cards * card)
{
	
	hand.push_back(card);
}

void Hand::countHand()
{
	cout << "counthand was called and it returns: " << getHandSize();
}

void Hand::handValue()
{
	cout << endl << endl << "the total is: " << getHandValue();
}

int Hand::getHandSize()
{
	return hand.size();
}

int Hand::getHandValue() 
{
	int total = 0;
	for (unsigned int i = 0; i < hand.size(); i++)
	{
		total += hand.at(i)->GetValue();
	}

	return total;
}

//int Hand::handValue()
//{
//	int total = 0;
//	for (int i = 0; i < hand.size(); i++)
//		{
//		cout << endl << hand.front();
//		}
//	if (total = 21)
//		{
//		cout << "You Win!";
//		}
//	else if(total > 21)
//		{
//		cout << "you lose this round!";
//		}
//	else
//		{
//		cout << total;
//		}
//
//	return total;
//}

vector<Cards*> Hand::getHand()
{
	return hand;
}
