#include "Dealer.h"
#include "Deck.h"
#include <vector>
#include "time.h"
#include <stdlib.h>  
#include "Cards.h"
#include "Player.h"
#include <iostream>

using namespace::std;

int main() {

	// Initialize Dealer and use the debugger to see what you have actually done

	Dealer jack = Dealer();
	Deck deck1 = Deck();

	
	//Write a method in Dealer to deal the initial facedown and faceup card to each player
	// jack.DealInitialCards();


	deck1.initializeDeck();
	//jack.initializePlayers();
	//jack.DealInitialCards(3);

	

	//jack.simplePrintHand(jack.GetPlayer(2));

	//need to create player vector but inputting them now
	Player player1 = Player("Adam", 1, 100);
	Player player2 = Player("bob", 2, 100);
	
	
	//player1 refers to adam
	cout << endl << player1.getName() << endl;

	//getPlayer(1) refers to second entered player
	cout << endl << jack.getPlayer(1)->getName() << endl;

	//printCard doesnt work
	//player1.DealRandomCard()->printCard();
	//jack.dealHand(1);

	

	//cout << "!!! countscore returned: " << alpha << " !!!" << endl << endl;



	//Now write a method in Dealer to show the table
	// jack.SimplePrintTable();



	//old stuff here
	

	return 0;

}