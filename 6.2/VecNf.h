#pragma once
#include <iostream>
using namespace std;
class VecNf
{
public:	
	VecNf(float* s = nullptr, int n = 0);
	int Size();
	float* getElement();
	float operator[](int index);		
	void operator =(VecNf v);
private:
	int size;
	float* element;
};


