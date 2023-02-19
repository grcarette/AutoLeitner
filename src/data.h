#pragma once
#include "subject.h"
#include "box.h"
#include "flashcard.h"
#include <filesystem>
#include <format>
#include <iostream>
#include <fstream>

namespace fs = std::filesystem;

class DataHandler {
private:
	ofstream activeFile;
	int activeBox;
	string activeSubject;
	string activeDir;

public:
	void openBox(int box);
	void newFC(int id, string question, string answer, int priority, int conSuc);
	void moveFC(FlashCard fc, bool success);
	void openSubject(string subject);
	void newSubject(string name);
	void newFile(string dir, string name, int num);
};