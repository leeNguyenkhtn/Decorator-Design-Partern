#include "TaiwanTea.h"
#include "Decorator.h"
TaiwanTea::TaiwanTea(Size size) {
	sizeOfCup = size;
}
int TaiwanTea::Price() {
	return sizeOfCup * PriceOf / 2;
}
string TaiwanTea::ToString() {
	return Name;
}
