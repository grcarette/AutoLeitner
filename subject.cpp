#include "subject.h"
#include <iostream>

Subject::Subject(string newName, int newIDCount) {
	for (int i = 0; i < 5; i++) {
		boxArr[i].setBoxType(i);
	}
	name = newName;
	idCount = newIDCount;
	activeBox = 0;
}

Subject::~Subject() {
}

void Subject::createCard(FlashCard card) {
	boxArr[0].addCard(card);
}

void Subject::moveCard(FlashCard card, bool correct) {
	if (correct) {
		boxArr[activeBox + 1].addCard(card);
		boxArr[activeBox].removeCard(card.getID());
	}
	else {
		boxArr[0].addCard(card);
		boxArr[activeBox].removeCard(card.getID());
	}
}

void Subject::selectBox(int boxNo) {
	activeBox = boxNo;
}

void Subject::getQuestions() {
	cout << "DISPLAYING FROM BOX " << activeBox << "\n";
	for(FlashCard i: boxArr[activeBox].getCardArray()) {
		string userInput;

		cout << "Enter 'X' to exit\n";
		cin >> userInput;

		if (userInput == "X") {
			break;
		}
		else {
			displayQuestion(i);
		}
	}
}

void Subject::displayQuestion(FlashCard card) {
	cout << "Question:\n\t" << card.getQuestion() << "\n\n";
	cin.get();
	cout << "Answer:\n\t" << card.getAnswer() << "\n\n";
}