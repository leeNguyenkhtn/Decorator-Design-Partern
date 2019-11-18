#include "MilkTea.h"
#include "Decorator.h"
#include "BlackSugarTea.h"
#include "Cream.h"
#include "PaperCup.h"
#include "TaiwanTea.h"
#include"WhiteBubble.h"
int Decorator::curPrice = 0;
string Decorator::curName = "";
int main() {
	//Example: create a glass of Taiwanese milk tea is covered by cream and add some white bubble.
	Size size = M;
	Decorator* milkTea = new PaperCup(new Cream(new WhiteBubble(new TaiwanTea(size))));
	cout << milkTea->Price() << endl;
	cout << milkTea->ToString() << endl;
}