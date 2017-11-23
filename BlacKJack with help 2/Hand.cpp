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
	cout << "The cards in the  hand are: " << endl;
	for (int i = 0; i < getHandSize(); i++)
	{
		hand[i]->showCard();
		cout << " " << endl;
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

void Hand::WinLose()
{
	if (getHandValue() < 21)
	{
		cout << "you can still hit";

	}
	else if (getHandValue() == 21)
	{
		cout << endl << "YOU'VE WON BLACKJACK!!!" << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!";
	}
	else if (getHandValue() > 21)
	{
		cout << endl << "Bummer, you lose... :(" ;
	}
}



vector<Cards*> Hand::getHand()
{
	return hand;
}
