#pragma once

#include<string>

using namespace std;

class FlashCard {
private:
	string question;
	string answer;
	int conSuc;
	int priority;
	int cardID;
public:
	FlashCard(string newQuestion, string newAnswer, int newCardID, int newPriority);
	~FlashCard();

	string GetQuestion();
	string GetAnswer();
	int GetConSuc();
	int GetPriority();
	int GetID();

	void SetQuestion(string newQuestion);
	void SetAnswer(string newAnswer);
	void SetConSuc(bool correct);
};