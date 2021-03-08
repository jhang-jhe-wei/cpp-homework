#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	int k, size;
	while (cin >> input)
	{
		k = 0;
		while (1)
		{
			k++;
			if (input.length() <= k * k)
			{
				size = k;
				break;
			}
		}
		for (int i = 0; i < k; i++)
		{
			for (int j = i; j < k*k; j += k)
				if (j < input.length())
					cout << input.at(j);
			cout << endl;
		}
	}
	return 0;
}
