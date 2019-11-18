#pragma once
#include "MilkTea.h"
class Decorator:public IMilkTea
{
protected:
	IMilkTea* instance;
protected:
	static int curPrice;
	static string curName;
public:
	Decorator(IMilkTea* ins);
	int Price();
	string ToString();
};

