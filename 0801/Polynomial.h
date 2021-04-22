#pragma once
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Polynomial {

public:

	double* param;
	int polysize;

	Polynomial();
	Polynomial(double* param, int size);
	Polynomial(const Polynomial& rhs);

	int mySize();
	friend double evaluate(const Polynomial& poly, const double& var);

	Polynomial& operator=(Polynomial v);
	Polynomial operator+(Polynomial v);
	friend Polynomial operator+(double num, Polynomial v);
	friend Polynomial operator+(Polynomial v, double num);
	Polynomial operator-(Polynomial v);
	friend Polynomial operator-(double num, Polynomial v);
	friend Polynomial operator-(Polynomial v, double num);
	Polynomial operator*(Polynomial v);
	friend Polynomial operator*(double num, Polynomial v);
	friend Polynomial operator*(Polynomial v, double num);
	double& operator[](int i);
};