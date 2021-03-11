#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;
#define BUFFER_SIZE 1024
bool compareNumber(pair<int, size_t> p1, pair<int, size_t> p2)
{
	return (p1.first>p2.first);
}
int main(int argc,char *argv[])
{
	ifstream inputFile;
	inputFile.open(argv[1],ios::in);
	//inputFile.open("input1.txt", ios::in);
	char buffer[BUFFER_SIZE];
	if (inputFile)
	{
		vector<pair<int, size_t>> frequencyList;
		vector<int> storeage;
		char *ptr;
		while (inputFile.getline(buffer, BUFFER_SIZE))
		{
			ptr = strtok(buffer," ");			
			while (ptr != NULL)
			{							
				storeage.push_back((int)atof(ptr));
				ptr = strtok(NULL, " ");
			}
		}
		pair<int, size_t> pFirst;
		pFirst.first = storeage[0];
		pFirst.second = 1;
		frequencyList.push_back(pFirst);
		for (size_t i = 1; i < storeage.size(); i++)
		{
			bool find = false;
			for (size_t j = 0; j < frequencyList.size(); j++)
			{
				if (storeage[i] == frequencyList[j].first)
				{
					find = true;
					frequencyList[j].second++;
					break;
				}
			}
			if (!find)
			{
				pair<int, size_t> p;
				p.first = storeage[i];
				p.second = 1;
				frequencyList.push_back(p);
			}
		}
		sort(frequencyList.begin(), frequencyList.end(), compareNumber);
		printf("N\tcount\n");
		for (size_t i = 0; i < frequencyList.size(); i++)
		{
			printf("%d\t%d\n", frequencyList[i].first, frequencyList[i].second);
		}
		system("pause");
	}
	else
	{
		return -1;
	}	
	return 0;
}
