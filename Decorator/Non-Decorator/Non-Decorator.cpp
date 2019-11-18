#include <iostream>
#include "Header.h"
int main() {
	cout << "-----------MENU----------" << endl;
	cout << "________Milk Tea :_______" << endl;
	cout << "1. Taiwan Milk Tea....10k" << endl;
	cout << "2. Black Sugar Tea....14k" << endl;
	cout << "___________Size__________" << endl;
	cout << "1. S(Small)............x1" << endl;
	cout << "2. M(Medium).........x1,5" << endl;
	cout << "3. L(Large)............x2" << endl;
	cout << "_________Topping :_______" << endl;
	cout << "1. None" << endl;
	cout << "2. White Bubble........5k" << endl;
	cout << "3. Cream...............7k" << endl;
	cout << "The milk tea choosen is: ";
	int chooseMilkTea = 0;
	cin >> chooseMilkTea;
	cout << "The size choosen is: ";
	int size = 0;
	cin >> size;
	cout << "The topping choosen is: ";
	int chooseTopping = 0;
	cin >> chooseTopping;
	int choose = chooseMilkTea * 10 + chooseTopping;
	MilkTea* milkTea = NULL;
	switch (choose)
	{
	case 11:
		milkTea = new TaiwanTea(Size(size + 1));
		break;
	case 12:
		milkTea = new TW_WhiteBubble(Size(size + 1));
		break;
	case 13:
		milkTea = new TW_Cream(Size(size + 1));
		break;
	case 21:
		milkTea = new BlackSugarTea(Size(size + 1));
		break;
	case 22:
		milkTea = new BS_WhiteBubble(Size(size + 1));
		break;
	case 23:
		milkTea = new BS_Cream(Size(size + 1));
		break;
	default:
		cout << "Error ! Out of bound" << endl;
		break;
	}
	cout << milkTea->ToString() << ": " << milkTea->Price() << "k" <<endl;
	return 0;
}