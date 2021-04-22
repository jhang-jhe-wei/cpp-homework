//Author:wells
//Date:2019/4/1
//Last Update:2019/4/1
//Program Statement:PrimeNumber class building
#include <iostream>
#include "PrimeNumber.h"
using namespace std;
int main()
{
	PrimeNumber p1, p2(13);
	PrimeNumber a = ++p1;
	PrimeNumber b = p2++;
	cout << a.get() << endl;//2
	cout << p1.get() << endl;//2
	cout << b.get() << endl;//13
	cout << p2.get() << endl;//17
	system("pause");
	return 0;
}
