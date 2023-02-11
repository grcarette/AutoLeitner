#include "box.h"
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
	cardArray.erase(cardArray.begin() + i);
}

int FCBox::getBoxType() {
	return boxType;
}
vector<FlashCard> FCBox::getCardArray() {
	return cardArray;
}
