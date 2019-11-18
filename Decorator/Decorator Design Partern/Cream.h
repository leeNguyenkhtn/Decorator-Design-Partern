#pragma once
#include "Decorator.h"
class Cream:public Decorator
{
public:
	const int PriceOf = 7;
	const string Name = "Cream";
public:
	Cream(IMilkTea* ins);
	int Price();
	string ToString();
};

