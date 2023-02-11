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
	string getQuestion();
	string getAnswer();
	int getConSuc();
	int getPriority();

	void setQuestion(string newQuestion);
	void setAnswer(string newAnswer);
	void setConSuc(bool correct);
};