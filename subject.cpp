#include "subject.h"

Subject::Subject(int newIDCount = 0) {
	for (int i = 0; i < 5; i++) {
		boxArr[i].setBoxType(i);
	}
	idCount = newIDCount;
}

void Subject::moveCard(FlashCard card, bool correct, int currentBox) {
	if (correct) {
		boxArr[currentBox + 1].addCard(card);
		boxArr[currentBox].removeCard(card.getID());
	}
	else {
		boxArr[0].addCard(card);
		boxArr[currentBox].removeCard(card.getID());
	}
}