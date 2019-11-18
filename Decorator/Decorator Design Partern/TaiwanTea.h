#pragma once
#include "MilkTea.h"
class TaiwanTea: public IMilkTea
{
private:
	Size sizeOfCup;
public:
	const int PriceOf = 10;
	const string Name = "Taiwan Milk Tea";
public:
	TaiwanTea(Size size);
	int Price();
	string ToString();
};

