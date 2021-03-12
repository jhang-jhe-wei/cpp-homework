//Author:wells
//Date:2019/4/9
//Last Updata:2019/4/9
//Problem Statement:VecNf
#include "VecNf.h"
void doNothing(VecNf tar) { return; }
float operator*(VecNf a, VecNf b)
{
	if (a.Size() == b.Size())
	{
		float* temp;
		temp = new float[a.Size()];
		float counter = 0;
		for (int i = 0; i < a.Size(); i++)
		{
			temp[i] = a[i] * b[i];
			counter += temp[i];
		}
		return counter;
	}
	else
	{
		cout << "dimensions inconsistent" << endl;
		return 0;
	}
}

VecNf operator*(VecNf v, float a)
{
	float* temp;
	temp = new float[v.Size()];
	for (int i = 0; i < v.Size(); i++)
	{
		temp[i] = a * v[i];
	}
	return VecNf(temp, v.Size());
}

VecNf operator*(float a, VecNf v)
{
	float* temp;
	temp = new float[v.Size()];
	for (int i = 0; i < v.Size(); i++)
	{
		temp[i] = a * v[i];
	}
	return VecNf(temp, v.Size());
}
void VecNf::operator=(VecNf v)
{
	size = v.Size();
	element = v.getElement();
	cout << "ASSIGNMENT!!!" << endl;
}

VecNf operator+(VecNf a, VecNf b)
{
	if (a.Size() == b.Size())
	{
		float* temp;
		temp = new float[a.Size()];
		for (int i = 0; i < a.Size(); i++)
		{
			temp[i] = a[i] + b[i];
		}
		return VecNf(temp, a.Size());
	}
	else
	{
		cout << "dimensions inconsistent" << endl;
		return VecNf();
	}
}

VecNf operator-(VecNf a, VecNf b)
{
	if (a.Size() == b.Size())
	{
		float* temp;
		temp = new float[a.Size()];
		for (int i = 0; i < a.Size(); i++)
		{
			temp[i] = a[i] - b[i];
		}
		return VecNf(temp, a.Size());
	}
	else
	{
		cout << "dimensions inconsistent" << endl;
		return VecNf();
	}
}

ostream& operator<<(ostream& out, VecNf a)
{
	for (int i = 0; i < a.Size() - 1; i++)
	{
		out << a[i];
	}
	cout << endl;
	return out;
}
int main()
{
	float a_value[] = { 3.0, 2.0 };
	float b_value[] = { 1, 2, 3 };
	float c_value[] = { 6, 5, 4 };
	VecNf A(a_value, 2);
	VecNf B(b_value, 3);
	VecNf C(c_value, 3);
	VecNf T;
	T = A; // Assignment
	for (int i = 0; i < T.Size(); i++) {
		cout << T[i] << ' ';
	} cout << endl;

	T = B; // Assignment
	for (int i = 0; i < T.Size(); i++) {
		cout << T[i] << ' ';
	} cout << endl;

	T = B + C; // Vector addition
	for (int i = 0; i < T.Size(); i++) {
		cout << T[i] << ' ';
	} cout << endl;

	doNothing(T); // call by value

	cout << C * B << endl; // Scale

	cout << A * C << endl; // Inconsistent

	system("pause");
	return 0;
}
