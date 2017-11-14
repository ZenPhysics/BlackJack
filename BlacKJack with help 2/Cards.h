#pragma once
#include<string>
#include <iostream>
#include <vector>

using namespace::std;

class Cards
{

protected:
	int value;
	string color;
	string faceCard;
	string state;
	string visibility;

public:
	Cards(int, string, string, string, string);
	~Cards();
	string GetState();
	string GetColor();
	int GetValue();
	string GetVisible();
	void SetState(string);
	void SetVisible(string);
	void showCard();
	
};

