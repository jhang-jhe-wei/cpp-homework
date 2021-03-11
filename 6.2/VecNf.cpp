#include "VecNf.h"
VecNf::VecNf(float * s, int n)
{
	element = s;
	size = n;
}

int VecNf::Size()
{
	return size;
}

float * VecNf::getElement()
{
	return element;
}

float VecNf::operator[](int index)
{
	if (index > size - 1 || index < 0)
	{
		cout << "out of range!" << endl;
		return 0;
	}
	else 
	{
		return element[index];
	}	
}

