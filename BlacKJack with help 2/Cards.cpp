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
	cout << value << " of " << color;
}





