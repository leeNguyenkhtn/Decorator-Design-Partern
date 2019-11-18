#pragma once
#include "Decorator.h"
class WhiteBubble :public Decorator
{
public:
	const int PriceOf = 5;
	const string Name = "White Bubble";
public:
	WhiteBubble(IMilkTea* ins);
	int Price();
	string ToString();
};

