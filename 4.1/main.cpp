#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	int j = 0;
	int counter = 1;
	int lengh = 0;	
	while (cin >> i >> j) 
	{		
		lengh = 0;
		if (i < 0 || i>1000000 || j < 0 || j>1000000) 
		{
			cout << "out of range!" << endl;
			continue;
		}
		cout << i << ' ' << j << ' ';
		if (i > j) 
		{
			int temp = i;
			i = j;
			j = temp;
		}
		for (int y = i; y <= j; y++) 
		{
			counter = 1;
			int z = y;
			while (z != 1) 
			{				
				counter++;
				if (z % 2 == 0) 
				{
					z /= 2;
				}
				else 
				{
					z = z * 3 + 1;
				}
			}
			if (counter > lengh) 
			{
				lengh = counter;
			}
		}
		cout << lengh << endl;		
	}
}