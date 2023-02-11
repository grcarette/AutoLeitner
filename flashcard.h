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
	string getQuestion() {
		return question;
	}
	string getAnswer() {
		return answer;
	}
	int getConSuc() {
		return conSuc;
	}
	int getPriority() {
		return priority;
	}

	void setQuestion(string newQuestion) {
		question = newQuestion;
	}

	void setAnswer(string newAnswer) {
		answer = newAnswer;
	}

	void setConSuc(bool correct) {
		if (correct == true) {
			conSuc++;
		}
		else {
			conSuc = 0;
		}
	}
};