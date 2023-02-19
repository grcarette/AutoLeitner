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

string FlashCard::GetQuestion() {
	return question;
}
string FlashCard::GetAnswer() {
	return answer;
}
int FlashCard::GetConSuc() {
	return conSuc;
}
int FlashCard::GetPriority() {
	return priority;
}
int FlashCard::GetID() {
	return cardID;
}

void FlashCard::SetQuestion(string newQuestion) {
	question = newQuestion;
}
void FlashCard::SetAnswer(string newAnswer) {
	answer = newAnswer;
}
void FlashCard::SetConSuc(bool correct) {
	if (correct) {
		conSuc++;
	}
	else {
		conSuc = 0;
	}
}