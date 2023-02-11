#include "box.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

void FCBox::instCards() {
	//instantiate cards from file
}
void FCBox::addCard(FlashCard card) {
	cardArray.push_back(card);
}
void FCBox::removeCard(int cardID) {
	int i = 0;
	for (i; i < cardArray.size(); i++) {
		if (cardArray[i].getID() == cardID) {
			break;
		}
	}
	cout << i << endl;
	cardArray.erase(cardArray.begin() + i);
}

int FCBox::getBoxType() {
	return boxType;
}
vector<FlashCard> FCBox::getCardArray() {
	return cardArray;
}
FlashCard FCBox::getFC() {
	srand(time(0));
	return cardArray[rand() % cardArray.size()];
}
