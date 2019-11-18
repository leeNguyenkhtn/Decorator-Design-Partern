#include "Header.h"
//TaiwanTea
TaiwanTea::TaiwanTea(Size size) {
	kindofTea = size;
}
int TaiwanTea::Price() {
	return kindofTea * TW / 2;
}
string TaiwanTea::ToString() {
	return "TaiWan Milk Tea ";
}
//BlackSugarTea
BlackSugarTea::BlackSugarTea(Size size) {
	kindofTea = size;
}
int BlackSugarTea::Price() {
	return kindofTea * BS / 2;
}
string BlackSugarTea::ToString() {
	return "Black Sugar Milk Tea";
}
//TW_WhiteBubble
TW_WhiteBubble::TW_WhiteBubble(Size size) :TaiwanTea(size) {
}
int TW_WhiteBubble::Price() {
	return kindofTea * TW / 2 + WB;
}
string TW_WhiteBubble::ToString() {
	return "Taiwan Milk Tea topping White Bubble";
}
//TW_Cream
TW_Cream::TW_Cream(Size size) :TaiwanTea(size) {
}
int TW_Cream::Price() {
	return kindofTea * TW / 2 + WB;
}
string TW_Cream::ToString() {

	return  "Taiwan Milk Tea topping Cream";
}
//BS_WhiteBubble
BS_WhiteBubble::BS_WhiteBubble(Size size) :BlackSugarTea(size) {
}
int BS_WhiteBubble::Price() {
	return kindofTea * TW / 2 + WB;
}
string BS_WhiteBubble::ToString() {
	return "Black Sugar Milk Tea topping White Bubble";
}
//BS_Cream
BS_Cream::BS_Cream(Size size) :BlackSugarTea(size) {
}
int BS_Cream::Price() {
	return kindofTea * TW / 2 + WB;
}
string BS_Cream::ToString() {

	return "Black Sugar Milk Tea topping Cream";
}