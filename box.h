#pragma once
#include <vector>
#include "flashcard.h"

class FCBox {
private:
	vector<FlashCard> cardArray;
	int boxType;

public:
	FCBox(int newBoxType) {
		boxType = newBoxType;
	}

	void instCards();
	void addCard(FlashCard card);
	void removeCard(int index);

	int getBoxType();
	vector<FlashCard> getCardArray();
	FlashCard getFC();
};