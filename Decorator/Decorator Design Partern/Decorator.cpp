#include "Decorator.h"
Decorator::Decorator(IMilkTea* ins) {
	instance = ins;
	Decorator::curPrice = ins->Price();
	Decorator::curName = ins->ToString();
}
int Decorator::Price() {
	return Decorator::curPrice;
}
string Decorator::ToString() {
	return Decorator::curName;
}

