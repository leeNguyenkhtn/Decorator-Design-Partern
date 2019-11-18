#pragma once
#include "Decorator.h"
class PaperCup:public Decorator
{
public:
	const int PriceOf = 2;
	const string Name = "Paper Cup";
public:
	PaperCup(IMilkTea* ins);
	int Price();
	string ToString();
};

