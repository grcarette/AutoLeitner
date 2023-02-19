#pragma once
#include <vector>
#include "flashcard.h"

class FCBox {
private:
	vector<FlashCard> cardArray;
	int boxType;

public:
	void InstCards();
	void SetBoxType(int newBoxType);
	void AddCard(FlashCard card);
	void RemoveCard(int index);
	void PushBack();

	int GetBoxType();
	vector<FlashCard> GetCardArray();
	FlashCard GetFC();
};