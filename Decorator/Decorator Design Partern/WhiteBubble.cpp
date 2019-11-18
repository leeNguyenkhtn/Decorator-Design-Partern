#include "WhiteBubble.h"
WhiteBubble::WhiteBubble(IMilkTea* ins): Decorator(ins){
	Decorator::curPrice += this->PriceOf;
	Decorator::curName = Decorator::curName + " + " + this->Name;
}
int WhiteBubble::Price() {
	return Decorator::curPrice;
}
string WhiteBubble::ToString() {
	return Decorator::curName;
}