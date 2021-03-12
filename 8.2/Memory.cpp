#include "Memory.h"
Memory::Memory()//constructor method
{
	size = 0;
	data.clear();
}

Memory::Memory(int size)//constructor method
{
	this->size = size;
	for (int i = 0; i < size; i++)
	{
		data.push_back(0);
	}
}
int stringToInt(string s)//string轉成int
{
	int n = 0;
	int c = 1;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		n += (s[i] - '0') * c;
		c *= 10;
	}
	return n;
}


void Memory::setMemory(int loc, string type, string val)//設定method，參數為位址，型別及元素
{
	if (loc >= size || loc < 0)
	{
		cout << "Violation Access." << endl;
	}
	else
	{
		int vali;
		if (type == "char")
		{
			data[loc] = stringToInt(val);
		}
		else if (type == "String")
		{
			if (loc + val.length() > size - 1) 
			{
				cout << "Violation Access." << endl;
			}
			for (int i = 0; i < val.length(); i++)
			{			
				data[i + loc] = val[i];
			}
		}
		else if (type == "int" || type == "short")
		{
			if (type == "int") 
			{
				if (loc + 4 > size - 1)
				{
					cout << "Violation Access." << endl;
				}
			}
			if (type == "short")
			{
				if (loc + 2 > size - 1)
				{
					cout << "Violation Access." << endl;
				}
			}
			vali = stringToInt(val);
			vector<int> k;
			int temp = 0;
			int c = 1;
			while (vali > 0)
			{
				temp += (vali % 16) * c;
				if (c == 16)
				{
					c = 1;
					k.push_back(temp);
					temp = 0;
				}
				else
				{
					c *= 16;
				}
				vali /= 16;
			}
			for (int i = 0; i < k.size(); i++)
			{
				data[i + loc] = k[i];
			}
		}
	}
}

void Memory::getMemory(int loc, string type)//為輸出使用，參數為地址，型別
{	
	if (loc >= size || loc < 0)
	{
		cout << "Violation Access." << endl;
		
	}
	else
	{
		if (type == "String")
		{
			while(loc<size)
			cout << (char)data[loc++];			
		}
		else if (type == "char") 
		{
			cout << (char)data[loc];
		}
		else if (type == "short") 
		{
			if (loc + 2 > size - 1)
			{
				cout << "Violation Access." << endl;
				return;
			}
			else 
			{
				int temp = 0;
				temp += data[loc];
				temp += data[loc + 1] * 16 * 16;
				cout << temp;
			}
		}
		else if (type == "int" ) 
		{
			if (loc + 4 > size - 1)
			{
				cout << "Violation Access." << endl;
			}
			else 
			{
				int temp = 0;
				temp += data[loc];
				temp += data[loc + 1] * 16 * 16;
				temp += data[loc + 2] * 16 * 16 * 16 * 16;
				temp += data[loc + 3] * 16 * 16 * 16 * 16 * 16 * 16;
				cout << temp;
			}			
		}
		cout << endl;
	}	
}
