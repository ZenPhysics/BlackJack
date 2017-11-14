#include "Deck.h"
#include "Cards.h"
#include "time.h"

using namespace::std;



Deck::Deck()
{


}

Deck::~Deck()
{


}

vector<Cards> Deck::getAllCards()
{
	return vector<Cards>();
}


void Deck::initializeDeck()
{
	string suites[] = { "hearts", "spades", "diamonds", "clubs" };

	for (int i = 0; i < 4; i++) {
		for (int j = 2; j <= 10; j++)
		{
			allCards.push_back(Cards(j, suites[i], "none", "inDeck", "notVisible"));
			
		}
	}
	for (int i = 0; i < 4; i++) {
		allCards.push_back(Cards(10, suites[i], "Jack", "inDeck", "notVisible"));
		allCards.push_back(Cards(10, suites[i], "Queen", "inDeck", "notVisible"));
		allCards.push_back(Cards(10, suites[i], "King", "inDeck", "notVisible"));
		allCards.push_back(Cards(11, suites[i], "Ace", "inDeck", "notVisible"));
	}
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
Cards * Deck::DealRandomCard()
{
	//get all eligible cards
	vector<Cards *> eligibleCards;
	//vector<Cards *> Hand;
	int max = allCards.size();
	for (int i = 0; i < max; i++) {
		if (allCards.at(i).GetState() == "inDeck") {
			eligibleCards.push_back(&allCards.at(i));


		}

		srand(time(NULL));
		int r = rand() % eligibleCards.size();

		Cards * dealtCard = eligibleCards.at(r);


		dealtCard->SetState("inPlay");
		dealtCard->SetVisible("Visible");
		return dealtCard;


	}
}

