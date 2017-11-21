#include "Deck.h"
#include "Cards.h"
#include "time.h"
#include <vector>

using namespace::std;

Deck::Deck()
{
	srand(time(NULL));
	initializeDeck();
	//vector<Cards> eligibleCards = vector<Cards>();
	//initializeDeck();
	//eligibleCards1();

}

Deck::~Deck()
{


}

vector<Cards> Deck::getDeck()
{
	return allCards;
}


void Deck::initializeDeck()
{
	string suites[] = { "hearts", "spades", "diamonds", "clubs" };

	for (int i = 0; i < 4; i++) {
		for (int j = 2; j <= 10; j++)
		{
			allCards.push_back(Cards(j, suites[i], "none", true, false));
			
		}
	}
	for (int i = 0; i < 4; i++) {
		allCards.push_back(Cards(10, suites[i], "Jack", true, false));
		allCards.push_back(Cards(10, suites[i], "Queen", true, false));
		allCards.push_back(Cards(10, suites[i], "King", true, false));
		allCards.push_back(Cards(11, suites[i], "Ace", true, false));
	}

	cout << "Deck Size: " << allCards.size() << endl;
	allCards[43].showCard();
}
void Deck::eligibleCards1()
{
	vector<Cards *> eligibleCards;

	for (int i = 1; i <= (int)allCards.size(); i++)
	{
		eligibleCards.push_back(&allCards.at(i));
	}

	cout << "There are " << eligibleCards.size() << " eligible cards" << endl;



}

Cards *  Deck::DealRandomCard()
{
	if (!allCards.empty())
	{
		int r = rand() % 52;

		Cards * dealtCard = &allCards.at(r);
		//saw the same card twice?
		allCards.erase(allCards.begin() + r);
		dealtCard->SetState(false);
		dealtCard->SetVisible(true);
		return dealtCard;
	}
}

int Deck::countCardsInDeck()
{
	return allCards.size();
}


