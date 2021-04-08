#pragma once
#include <iostream>
#include <vector>
using namespace std;

class VecNf 
{
public:
	float* vStart;
	int count;
	
	VecNf();
	VecNf(float* dest, int cnt);
	VecNf(const VecNf& rhs);

	int Size();
	float& operator[](int i);
	VecNf operator+(VecNf v);
	VecNf operator-(VecNf v);
	float operator*(VecNf v);
	friend VecNf operator*(float multi, VecNf v);
	friend VecNf operator*(VecNf v, float multi);
	void operator=(VecNf v);
	friend ostream& operator<<(ostream& out, VecNf v);
};
