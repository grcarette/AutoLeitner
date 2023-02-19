#include "data.h"

void DataHandler::openBox(int box) {
	activeBox = box;
	activeFile.close();
	activeFile.open(format("{}\\{}_b{}.txt", activeDir, activeSubject, to_string(activeBox)));
}
void DataHandler::newFC(int id, string question, string answer, int priority, int conSuc) {
	activeFile << format("{}|{}|{}|{}|{}\n", id, question, answer, priority, conSuc);
}
void DataHandler::moveFC(FlashCard fc, bool success) {

}
void DataHandler::openSubject(string subject) {
	activeSubject = subject;
	activeDir = format(".\\data\\Subjects\\{}", subject);
}


void DataHandler::newSubject(string name) {
	string formattedName = format(".\\data\\Subjects\\{}", name);
	cout << formattedName;
	fs::create_directories(formattedName);

	for (int i = 0; i < 5;i++) {
		newFile(formattedName, name, i);
	}
}
void DataHandler::newFile(string dir, string name, int num) {
	string formattedName = format("{}\\{}_b{}.txt",dir, name, to_string(num));
	cout << formattedName << endl;

	ofstream newFile;
	newFile.open(formattedName);
	newFile.close();
}