//Author:wells
//Date:2019/5/14
//Last UpData:2019/5/14
//Problem statement:Creatures
#include "Creatures.h"
#include<time.h>
int main()
{
	srand(time(NULL));
	Human h(30, 10);
	h.getDamage();
	cout << endl;

	Elf e;
	e.getDamage();
	cout << endl;

	Balrog b(50, 50);;
	b.getDamage();
	cout << endl;

	Cyberdemon c(30, 40);
	c.getDamage();
	cout << endl;

	system("pause");

	return 0;
}