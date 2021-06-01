#include "Form.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
string common;
Form::Form()
{
}

void Form::SetInputWord(string inputWord)
{
	input = inputWord;
}

void Form::ProcessInputWord()
{
	for (int i = 0; i < input.size(); i++) 
	{
		if (input.at(i) >= 65 && input.at(i) <= 90)
		{
			input.at(i) += 32;
		}		
	}
}

void Form::SetFileName(string fileName)
{	
	this->fileName = fileName;
}

void Form::Load_CompaerWord()
{
	fstream file;
	file.open(fileName, ios::in);
	if (!file.is_open()) 
	{
		cout << "File mot found!" << endl;
	}
	string copy;
	string in;	
	while (file >> in) 
	{
		copy.clear();
		copy = input;
		bool flag = false;
		for (int i = 0; i < in.size(); i++) 
		{
			flag = false;
			for (int j = 0; j < input.size(); j++) 
			{
				if (in.at(i) == copy.at(j)) 
				{
					copy.at(j) = '0';
					flag = true;
					break;
				}
			}
			if (flag) 
			{
				continue;
			}
			else 
			{
				in.clear();
				break;
			}
		}
		if (flag) 
		{
			common += in + '\n';
		}
	}
}

void Form::PrintFoundWords()
{
	cout << common.c_str();
}



