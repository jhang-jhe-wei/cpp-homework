#include<iostream>
#include<string>

using namespace std;


int main()
{
	string input;
	while (cin >> input)
	{
		if (input.size() < 10) 
		{
			for (int i = 0; i < 10 - input.size(); i++) {
				cout << " ";
			}
		}
		cout << input << endl;
	}
    return 0;
}
