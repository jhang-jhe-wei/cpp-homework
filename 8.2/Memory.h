#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Memory
{
public:
	vector<int> data;
	int         size;
	Memory();
	Memory(int size);
	void setMemory(int loc, string type, string val);
	void getMemory(int loc, string type);
};
int stringToInt(string s);
