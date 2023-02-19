#pragma once
#pragma warning(disable: 4996)
#include "box.h"

#define kNextCard '1'
#define kSwitchBox '2'
#define kQuit '3'

class Subject {
private:
	FCBox boxArr[5];
	string name;
	int idCount;
	int activeBox;

public:
	Subject(string newName, int newIDCount);
	~Subject();

	void CreateCard(string question, string answer, int priority = 1);
	void MoveCard(FlashCard card, bool correct);
	void SelectBox(int boxNo);
	void SubjectLoop();
	void DisplayQuestion(FlashCard card);
	
};