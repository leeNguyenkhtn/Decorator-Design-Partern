#include "Cream.h"
Cream::Cream(IMilkTea* ins):Decorator(ins){
	Decorator::curPrice += this->PriceOf;
	Decorator::curName = Decorator::curName + " + " + this->Name;
}
int Cream::Price() {
	return Decorator::curPrice;
}
string Cream::ToString() {
	return Decorator::curName;
}