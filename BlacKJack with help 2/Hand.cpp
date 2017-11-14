#include "Hand.h"




Hand::Hand()
{
	
		
	
}


Hand::~Hand()
{
}

void Hand::takeCard(Cards * card)
{
	
	hand.push_back(card);
}

int Hand::countHand()
{
	int numberofCards = 0;
	for (int i = 0; i < hand.size(); i++)
		{
			numberofCards++;
		}
	return numberofCards;
}

int Hand::handValue()
{
	int total = 0;
	for (int i = 0; i < hand.size(); i++)
		{
		cout << endl << hand.front();
		}
	return total;
}
