//Author:wells
//Date:2019/4/9
//Last Updata:2019/4/9
//Problem Statement:Found greatest Commom divisor
#include <iostream>
using namespace std;
int main() 
{
	int a = 0;
	int b = 0;
	int num;
	while (cin >> a >> b) 
	{
		for (int i = 1; i <= a && i <= b; i++) 
		{
			if (a%i == 0&&b%i==0) 
			{
				num = i;
			}
		}
		cout << num << endl;
	}
}