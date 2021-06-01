//Author:wells
//Date:2019/4/1
//Last Update:2019/4/1
//Program Statement:PrimeNumber class building
#pragma once
#include <iostream>
using namespace std;
class PrimeNumber
{
public:
	PrimeNumber();
	PrimeNumber(int Primenumber);
	int get();
	PrimeNumber operator++(int);
	PrimeNumber operator--(int);
	PrimeNumber operator++();
	PrimeNumber operator--();	
	PrimeNumber operator=(PrimeNumber n);
protected:
	int primeFound(int function, int p);
private:
	int p;
};

