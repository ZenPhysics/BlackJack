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
	void DealInitialCards(int numberOfPlayers);
	void initializePlayers();
	void playerTurn(int i);
	void turnsInGame();
	int getPlayerCount();
	Player getPlayer(int i);
	Deck getDealersDeck();
	Dealer();
	~Dealer();
};

