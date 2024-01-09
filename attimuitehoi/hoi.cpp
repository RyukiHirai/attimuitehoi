#include <iostream>
#include "hoi.h"
#include "defalut.h"

using namespace std;

Hoi::Hoi()
{
	_outhand = HAND;
	for (int i = 1; i < HAND; i++)
	{
		hand[i] = i;
	}
	shuffle();
}

void Hoi::shuffle()
{
	for (int i = _outhand; i > 1; --i)
	{

	}
}