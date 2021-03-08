#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int getHighScores(vector<string>& name, vector<int>& score);

int main()
{
	vector<string> name;
	vector<int> score;
	int flag = 1;
	while (flag == 1)
	{
		name.clear();
		score.clear();
		flag = getHighScores(name, score);
		if (flag == 1)
		{
			cout << name[0] << endl << score[0] << endl;
			cout << name[1] << endl << score[1] << endl;
			cout << name[2] << endl << score[2] << endl;
		}
	}
	return 0;
}

int getHighScores(vector<string>& name, vector<int>& score)
{
	fstream inputStream;
	string tempName, fileName;
	int tempScore;
	cin >> fileName;
	if (cin.eof()) return 0;
	inputStream.open(fileName);
	if (!inputStream.is_open()) return 0;
	while (!inputStream.eof())
	{
		if (inputStream.eof()) break;
		inputStream >> tempName;
		inputStream >> tempScore;
		name.push_back(tempName);
		score.push_back(tempScore);
	}
	for (int i = 0; i < score.size(); i = i + 1)
	{
		for (int j = i; j < score.size(); j = j + 1)
		{
			if (score[i] < score[j])
			{
				tempName = name[i];
				tempScore = score[i];
				name[i] = name[j];
				score[i] = score[j];
				name[j] = tempName;
				score[j] = tempScore;
			}
		}
	}
	return 1;
}