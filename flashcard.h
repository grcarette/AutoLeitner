#pragma once

#include<string>

using namespace std;

class FlashCard {
private:
	string question;
	string answer;
	int conSuc;
	int priority;
public:
	FlashCard(string newQuestion, string newAnswer, int newPriority = 1) {
		question = newQuestion;
		answer = newAnswer;
		priority = newPriority;
		conSuc = 0;
	}

	string getQuestion();
	string getAnswer();
	int getConSuc();
	int getPriority();

	void setQuestion(string newQuestion);
	void setAnswer(string newAnswer);
	void setConSuc(bool correct);
};