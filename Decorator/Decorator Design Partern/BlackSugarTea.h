#pragma once
#include "MilkTea.h"
class BlackSugarTea : public IMilkTea
{
private:
	Size sizeOfCup;
public:
	const int PriceOf = 14;
	const string Name = "Black Sugar Tea";
public:
	BlackSugarTea(Size size);
	int Price();
	string ToString();
};

