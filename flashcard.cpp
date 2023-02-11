#include "flashcard.h"

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

void FlashCard::setQuestion(string newQuestion) {
	question = newQuestion;
}
void FlashCard::setAnswer(string newAnswer) {
	answer = newAnswer;
}
void FlashCard::setConSuc(bool correct) {
	if (correct == true) {
		conSuc++;
	}
	else {
		conSuc = 0;
	}
}