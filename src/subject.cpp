#include "subject.h"
#include <iostream>
#include <conio.h>

Subject::Subject(string newName, int newIDCount) {
	for (int i = 0; i < 5; i++) {
		boxArr[i].SetBoxType(i);
	}
	name = newName;
	idCount = newIDCount;
	activeBox = 0;
}

Subject::~Subject() {
}

void Subject::CreateCard(string question, string answer, int priority) {
	FlashCard card(question, answer, idCount, priority);
	boxArr[0].AddCard(card);
	idCount++;
}

void Subject::MoveCard(FlashCard card, bool correct) {
	if (correct) {
		card.SetConSuc(true);
		boxArr[activeBox + 1].AddCard(card);
		boxArr[activeBox].RemoveCard(card.GetID());
	}
	else {
		card.SetConSuc(false);
		boxArr[0].AddCard(card);
		boxArr[activeBox].RemoveCard(card.GetID());
	}
}

void Subject::SelectBox(int boxNo) {
	activeBox = boxNo;
}

void Subject::SubjectLoop() {
	char key = 0;
	bool continueLooping = true;
	while (continueLooping) {
		if (boxArr[activeBox].GetCardArray().size() == 0) {
			printf("BOX IS EMPTY");
			SelectBox(activeBox+1);
		}

		FlashCard currentCard = boxArr[activeBox].GetCardArray()[0];

		printf("Menu: \t\t\t\t\tCurrent box: %d\n", activeBox);
		printf("%c. . . . .Next Card\n", kNextCard);
		printf("%c. . . . .Switch box\n", kSwitchBox);
		printf("%c. . . . .Exit\n", kQuit);

		key = getch();

		switch (key)
		{
		case kNextCard:
			DisplayQuestion(currentCard);

			printf("Was your answer correct?\n");
			printf("1. . . . .Correct\n");
			printf("2. . . . .Incorrect\n");

			key = getch();

			if (key == '1') {
				MoveCard(currentCard, true);
			}
			else if (activeBox == 0) {
				boxArr[activeBox].PushBack();
			}
			else {
				MoveCard(currentCard, false);
			}
			break;

		case kSwitchBox:
		{
			cout << "Which box would you like to switch to?\n";
			string userInput;
			cin >> userInput;
			SelectBox(stoi(userInput));
			break;
		}
		case kQuit:
			continueLooping = false;
			break;
		}
	}
}

void Subject::DisplayQuestion(FlashCard card) {
	cout << "Question:\n\t" << card.GetQuestion() << "\n\n";
	cout << "Answer:\n\t" << card.GetAnswer() << "\n\n";
}