#pragma once
#include<string>
#include "Deck.h"
#include "Player.h"
#include <iostream>
#include <vector>


using namespace::std;
class Dealer
{
private:
	Deck deck;
	vector<Player> players;
	int numberOfPlayers;

public:
	
	
	Cards * dealCard();
	void getDeck();
	void DealInitialCards(int numberOfPlayers);
	int initializePlayers();
	void playerTurn();
	Player getPlayer(int i);
	Dealer();
	~Dealer();
};

