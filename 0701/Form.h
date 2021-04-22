#pragma once
#include <string>
using namespace std;
class Form
{
public:
	Form();
	void SetInputWord(string inputWord);
	void ProcessInputWord();
	void SetFileName(string fileName);
	void Load_CompaerWord();
	void PrintFoundWords();
private:
	string input;
	string fileName;
};