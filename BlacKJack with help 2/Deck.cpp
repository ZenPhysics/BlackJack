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
	//allCards[43].showCard();
}


Cards * Deck::DealRandomCard()
{
	//get all eligible cards
	vector<Cards *> eligibleCards;
	int max = allCards.size();
	for (int i = 0; i < max; i++) {
		if (allCards.at(i).GetState() == true) {
			eligibleCards.push_back(&allCards.at(i));
		}
	}

	srand(time(NULL));
	int r = rand() % eligibleCards.size();
	Cards * dealtCard = eligibleCards.at(r);

	dealtCard->SetState(false);
	dealtCard->SetVisible(true);
	return dealtCard;
}

int Deck::countCardsInDeck()
{
	return allCards.size();
}


