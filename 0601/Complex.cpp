//Author:wells
//Date:2019/4/1
//Last Update:2019/4/1
//Program Statement:Complex class building
#include "Complex.h"
#include "math.h"
#include <iostream>
using namespace std;
Complex::Complex(double real, double imag)
{
	realValue = real;
	imaginaryValue = imag;
}

double Complex::real()
{
	return realValue;
}

double Complex::imag()
{
	return imaginaryValue;
}

double Complex::norm()
{
	return sqrt(pow(realValue,2)+pow(imaginaryValue,2));
}

void Complex::setReal(double a)
{
	realValue = a;
}

void Complex::setImag(double a)
{
	imaginaryValue = a;
}

bool Complex::operator==(Complex a)
{
	if (realValue == a.real()) 
	{
		if (imaginaryValue == a.imag()) 
		{
			return true;
		}
	}
	return false;
}

Complex Complex::operator+(Complex a)
{
	return Complex(realValue+a.real(),imaginaryValue+a.imag());
}

Complex Complex::operator - (Complex a)
{
	return Complex(realValue - a.real(), imaginaryValue - a.imag());
}

Complex Complex::operator * (Complex a)
{
	return Complex(realValue*a.real() -a.imag()*imaginaryValue,realValue*a.imag()+imaginaryValue*a.real());
}

Complex Complex::operator / (Complex a)
{
	return Complex((realValue*a.real()+imaginaryValue*a.imag())/ (pow(a.real(), 2) + pow(a.imag(), 2)),
		(imaginaryValue*a.real()-realValue*a.imag())/ (pow(a.real(), 2) + pow(a.imag(), 2)));
}

Complex Complex::operator+(double a)
{
	
	return Complex(realValue,imaginaryValue) + Complex(a);
}

Complex Complex::operator-(double a)
{
	return Complex(realValue, imaginaryValue) - Complex(a);
}

Complex Complex::operator*(double a)
{
	return Complex(realValue, imaginaryValue) * Complex(a);
}

Complex Complex::operator/(double a)
{
	return Complex(realValue, imaginaryValue) / Complex(a);
}



