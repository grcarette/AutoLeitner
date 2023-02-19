#include "box.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

void FCBox::InstCards() {
	//instantiate cards from file
}

void FCBox::SetBoxType(int newBoxType) {
	boxType = newBoxType;
}

void FCBox::AddCard(FlashCard card) {
	cardArray.push_back(card);
}

void FCBox::RemoveCard(int cardID) {
	int i = 0;
	for (i; i < cardArray.size(); i++) {
		if (cardArray[i].GetID() == cardID) {
			break;
		}
	}
	cardArray.erase(cardArray.begin() + i);
}

void FCBox::PushBack() {
	cardArray.push_back(cardArray[0]);
	cardArray.erase(cardArray.begin());
}

int FCBox::GetBoxType() {
	return boxType;
}

vector<FlashCard> FCBox::GetCardArray() {
	return cardArray;
}

FlashCard FCBox::GetFC() {
	srand(time(0));
	return cardArray[rand() % cardArray.size()];
}
