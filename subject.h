#pragma once
#include "box.h"

class Subject {
private:
	FCBox boxArr[5];
	int idCount;

public:
	Subject(int newIDCount = 0);

	void moveCard(FlashCard card, bool correct, int currentBox);

};