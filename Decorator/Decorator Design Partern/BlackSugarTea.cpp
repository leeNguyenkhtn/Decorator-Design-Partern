#include "BlackSugarTea.h"
#include "Decorator.h"
BlackSugarTea::BlackSugarTea(Size size) {
	sizeOfCup = size;
}
int BlackSugarTea::Price() {
	return sizeOfCup * PriceOf / 2;
}
string BlackSugarTea::ToString() {
	return Name;
}