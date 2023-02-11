#include "flashcard.h"

FlashCard::FlashCard(string newQuestion, string newAnswer, int newCardID, int newPriority) {
	question = newQuestion;
	answer = newAnswer;
	if (0 < newPriority && newPriority < 5) {
		priority = newPriority;
	}
	else {
		priority = 1;
	}
	cardID = newCardID;
	conSuc = 0;
}

FlashCard::~FlashCard() {
}

string FlashCard::getQuestion() {
	return question;
}
string FlashCard::getAnswer() {
	return answer;
}
int FlashCard::getConSuc() {
	return conSuc;
}
int FlashCard::getPriority() {
	return priority;
}
int FlashCard::getID() {
	return cardID;
}

void FlashCard::setQuestion(string newQuestion) {
	question = newQuestion;
}
void FlashCard::setAnswer(string newAnswer) {
	answer = newAnswer;
}
void FlashCard::setConSuc(bool correct) {
	if (correct) {
		conSuc++;
	}
	else {
		conSuc = 0;
	}
}