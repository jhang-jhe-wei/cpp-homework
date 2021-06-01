//Author:wells
//Date:2019/4/1
//Last Update:2019/4/1
//Program Statement:Complex class building
#pragma once
class Complex
{
public:
	Complex(double real = 0, double imag = 0);
	double real();
	double imag();
	double norm();
	void setReal(double a);
	void setImag(double a);
	bool operator ==(Complex a);	
	Complex operator +(Complex a);
	Complex operator -(Complex a);
	Complex operator *(Complex a);
	Complex operator /(Complex a);	
	Complex operator +(double a);
	Complex operator -(double a);
	Complex operator *(double a);
	Complex operator /(double a);		
private:
	double realValue;
	double imaginaryValue;
};

