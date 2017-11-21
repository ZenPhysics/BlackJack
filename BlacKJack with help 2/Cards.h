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
	bool state;
	bool visibility;

public:
	Cards(int, string, string, bool , bool);
	~Cards();
	bool GetState();
	string GetColor();
	string GetFaceCard();
	int GetValue();
	bool GetVisible();
	void SetState(bool);
	void SetVisible(bool);
	void showCard();
	
};

