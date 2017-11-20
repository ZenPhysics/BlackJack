#include "Deck.h"
#include "Cards.h"
#include "time.h"
#include <vector>

using namespace::std;



Deck::Deck()
{
	//vector<Cards> eligibleCards = vector<Cards>();
	//initializeDeck();
	//eligibleCards1();

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

	cout << "Deck Size: " << allCards.size() << endl;
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

		srand(time(NULL));
		
		if (!allCards.empty())
		{
			int r = rand() % 52;


			Cards * dealtCard = &allCards.at(r);


			dealtCard->SetState("inPlay");
			dealtCard->SetVisible("Visible");
			return dealtCard;

		}

	}


