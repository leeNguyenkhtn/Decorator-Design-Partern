#pragma once
#include<iostream>
#include<string>
using namespace std;
__interface IMilkTea
{
public:
	int Price();
	string ToString();
};
enum Size {
	S = 2,
	M = 3,
	L = 4
};

