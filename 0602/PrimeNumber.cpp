//Author:wells
//Date:2019/4/1
//Last Update:2019/4/1
//Program Statement:PrimeNumber class building
#include "PrimeNumber.h"

PrimeNumber::PrimeNumber()
{
	p = 1;
}

int PrimeNumber::primeFound(int function, int p)
{
	bool flag = false;
	if (function == 1)
	{
		if (p == 1)return 2;
		if (p == 2)return 3;
		while (!flag)
		{
			p++;
			for (int i = 2; i <= p; i++)
			{
				if (i == p)
				{
					flag = true;
					break;
				}
				if (p%i == 0)break;
			}
		}
		return p;
	}
	else
	{
		if (p == 2)return 1;
		else if (p == 1)return 1;
		while (!flag)
		{
			p--;
			for (int i = 2; i <= p; i++)
			{
				if (i == p)
				{
					flag = true;
					break;
				}
				if (p%i == 0)break;
			}
		}
		return p;
	}
}
	
PrimeNumber::PrimeNumber(int Primenumber)
{
	p = Primenumber;
}

int PrimeNumber::get()
{
		return p;
}

PrimeNumber PrimeNumber::operator++(int)
{
	PrimeNumber n(p);
	this->p = primeFound(1, p);
	return n;
}

PrimeNumber PrimeNumber::operator--(int)
{
	PrimeNumber n(p);
	this->p = primeFound(0, p);
	return n;
}

PrimeNumber PrimeNumber::operator++()
{
	this->p = primeFound(1, p);
	return *this;
}

PrimeNumber PrimeNumber::operator--()
{
	this->p = primeFound(0, p);
	return *this;
}

PrimeNumber PrimeNumber::operator=(PrimeNumber n)
{
	p = n.p;
	return n;
}
