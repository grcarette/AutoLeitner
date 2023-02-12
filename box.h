#pragma once
#include <vector>
#include "flashcard.h"

class FCBox {
private:
	vector<FlashCard> cardArray;
	int boxType;

public:
	void instCards();
	void setBoxType(int newBoxType);
	void addCard(FlashCard card);
	void removeCard(int index);
	void PushBack();

	int getBoxType();
	vector<FlashCard> getCardArray();
	FlashCard getFC();
};