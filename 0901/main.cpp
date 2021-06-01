//Author:wells
//Date:2019/4/27
//Last Updata:2019/4/27
//Problem Statement:Reversal
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
string Tolower(string s)   //換成小寫
{
	int l = s.length();
	for (int i = 0; i < l; i++)
	{
		s[i] = tolower(s[i]);
	}
	return s;
}
string reverse(string s)  //將字串反轉
{
	int l = s.length();
	for (int i = 0; i < l / 2; i++)
	{
		char c = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = c;
	}
	return s;
}
int main()
{
	ifstream File("words.txt");  //讀入檔案
	string s, cs;
	vector<string> v;
	vector<string>data;
	int length, count = 0;
	while (File >> s)   //將資料放入vector
	{
		v.push_back(s);
	}
	for (int i = 0; i < v.size(); i++)  //比較是否有符合reversal的字串
	{
		s = v[i];
		s = Tolower(s);
		length = s.length();
		for (int j = i + 1; j < v.size(); j++)
		{
			cs = v[j];
			cs = Tolower(cs);
			if (length == cs.length())
			{
				cs = reverse(cs);
				if (cs == s)
					data.push_back(v[i]);
			}
		}
	}
	length = data[0].length();
	for (int i = 1; i < data.size(); i++)//印出最長字串
	{
		if (data[i].length() > length)
			count = i;
	}
	cout << data[count] << endl;

	return 0;
}