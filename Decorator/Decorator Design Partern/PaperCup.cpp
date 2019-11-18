#include "PaperCup.h"
PaperCup::PaperCup(IMilkTea* ins):Decorator(ins){
	Decorator::curPrice += this->PriceOf;
	Decorator::curName = Decorator::curName + " + " + this->Name;
}
int PaperCup::Price() {
	return Decorator::curPrice;
}
string PaperCup::ToString() {
	return Decorator::curName;
}
