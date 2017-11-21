#include "Cards.h"

using namespace::std;


Cards::Cards(int c, string v, string f, bool s, bool vis)
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

bool Cards::GetState()
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

bool Cards::GetVisible()
{
	return visibility;
}

void Cards::SetState(bool aNewState)
{
	state = aNewState;
}

void Cards::SetVisible(bool visible)
{
	visibility = visible;
}

void Cards::showCard()
{
	//debugging becasue error -858993460 for value
	if (visibility)
	{
		if (GetFaceCard() == "none")
		{
			cout << value << " of " << color;
		}

		else
		{
			cout << faceCard << " of " << color;
		}
	}
	else 
	{
		cout << "card not visible";
	}
}









