#pragma once
#include "box.h"

class Subject {
private:
	FCBox boxArr[5];
	string name;
	int idCount;
	int activeBox;

public:
	Subject(string newName, int newIDCount);
	~Subject();

	void createCard(FlashCard card);
	void moveCard(FlashCard card, bool correct);
	void selectBox(int boxNo);
	void getQuestions();
	void displayQuestion(FlashCard card);
	
};