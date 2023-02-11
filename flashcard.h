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

	string getQuestion();
	string getAnswer();
	int getConSuc();
	int getPriority();
	int getID();

	void setQuestion(string newQuestion);
	void setAnswer(string newAnswer);
	void setConSuc(bool correct);
};