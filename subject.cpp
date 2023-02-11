#include "subject.h"
#include <iostream>
#include <conio.h>

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

void Subject::createCard(string question, string answer, int priority) {
	FlashCard card(question, answer, idCount, priority);
	boxArr[0].addCard(card);
	idCount++;
}

void Subject::moveCard(FlashCard card, bool correct) {
	if (correct) {
		card.setConSuc(true);
		boxArr[activeBox + 1].addCard(card);
		boxArr[activeBox].removeCard(card.getID());
	}
	else {
		card.setConSuc(false);
		boxArr[0].addCard(card);
		boxArr[activeBox].removeCard(card.getID());
	}
}

void Subject::selectBox(int boxNo) {
	activeBox = boxNo;
}

void Subject::subjectLoop() {
	char key = 0;
	int i = 0;
	bool continueLooping = true;
	while (continueLooping) {
		if (boxArr[activeBox].getCardArray().size() == 0) {
			printf("BOX IS EMPTY");
			break;
		}
		if (i > boxArr[activeBox].getCardArray().size()) {
			i = 0;
		}

		FlashCard currentCard = boxArr[activeBox].getCardArray()[i];

		printf("Menu: \t\t\t\t\tCurrent box: %d\n", activeBox);
		printf("%c. . . . .Next Card\n", kNextCard);
		printf("%c. . . . .Switch box\n", kSwitchBox);
		printf("%c. . . . .Exit\n", kQuit);

		key = getch();

		switch (key)
		{
		case kNextCard:
			displayQuestion(currentCard);

			printf("Was your answer correct?\n");
			printf("1. . . . .Correct\n");
			printf("2. . . . .Incorrect\n");

			key = getch();

			if (key == '1') {
				moveCard(currentCard, true);
			}
			else if (activeBox == 0) {
				i++;
			}
			else {
				moveCard(currentCard, false);
			}
			break;

		case kSwitchBox:
		{
			cout << "Which box would you like to switch to?\n";
			string userInput;
			cin >> userInput;
			selectBox(stoi(userInput));
			i = 0;
			break;
		}
		case kQuit:
			continueLooping = false;
			break;
		}
	}
}

void Subject::displayQuestion(FlashCard card) {
	cout << "Question:\n\t" << card.getQuestion() << "\n\n";
	//cin.get();
	cout << "Answer:\n\t" << card.getAnswer() << "\n\n";
}