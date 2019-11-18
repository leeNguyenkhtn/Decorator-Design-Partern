#pragma once
#include <iostream>
#include <string>
using namespace std;
//
enum Size {
	Large = 4,
	Medium = 3,
	Small = 2
};
//
enum PriceOf {
	TW = 10,
	BS = 14,
	WB = 5,
	CR = 7
};
//
class MilkTea {
public:
	virtual int Price() {
		return 0;
	};
	virtual string ToString() { 
		return "";
	};
};
//
class TaiwanTea :public MilkTea {
protected:
	Size kindofTea;
public:
	TaiwanTea(Size);
	virtual int Price();
	virtual string ToString();
};
//
class BlackSugarTea : public MilkTea{
protected:
	Size kindofTea;
public:
	BlackSugarTea(Size);
	virtual int Price();
	virtual string ToString();
};
//
class TW_WhiteBubble: public TaiwanTea {
public:
	TW_WhiteBubble(Size);
	int Price();
	string ToString();
};
//
class TW_Cream : public TaiwanTea{
public:
	TW_Cream(Size);
	int Price();
	string ToString();
};
//
class BS_WhiteBubble : public BlackSugarTea {
public:
	BS_WhiteBubble(Size);
	int Price();
	string ToString();
};
//
class BS_Cream :public BlackSugarTea {
public:
	BS_Cream(Size);
	int Price();
	string ToString();
};

