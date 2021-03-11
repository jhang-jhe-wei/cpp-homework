//Author:wells
//Date:2019/4/20
//Last Updata:2019/4/20
//Problem Statement:Memory Simulator
#include <iostream>
#include <string>
#include "Memory.h"
using namespace std;
int main()
{
	int size = 0;
	int times = 0;
	while (cin >> size >> times)//輸入大小，次數
	{
		Memory memory(size);
		for (int i = 0; i < times; i++) 
		{
			string function;
			cin >> function;
			int adress = 0;
			cin >> adress;
			string type;
			cin >> type;			
			if (function == "Set") //決定該呼叫甚麼功能
			{
				cin.get();
				string value;
				getline(cin, value,'\n');
				memory.setMemory(adress, type, value);
			}
			else if (function == "Get") 
			{
				memory.getMemory(adress, type);
			}
		}
	}
}