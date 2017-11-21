#include "Cards.h"

using namespace::std;


Cards::Cards(int c, string v, string f, string s, string vis)
{

	value = c;
	color = v;
	faceCard = f;
	state = s;
	visibility = vis;
}




Cards::~Cards()
{
}

string Cards::GetState()
{
	return state;
}

string Cards::GetColor()
{
	return color;
}

string Cards::GetFaceCard()
{
	return faceCard;
}


int Cards::GetValue()
{
	return value;
}

string Cards::GetVisible()
{
	return visibility;
}

void Cards::SetState(string aNewState)
{
	state = aNewState;
}

void Cards::SetVisible(string visible)
{
	visibility = visible;
}

void Cards::showCard()
{
	//debugging becasue error -858993460 for value
	if (GetFaceCard() == "none")
	{
		cout << endl << value << " of " << color;
	}
	else 
	{
		cout << endl << faceCard << " of " << color << endl;
	}
	
}









