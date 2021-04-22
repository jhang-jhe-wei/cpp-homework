#include "Polynomial.h"

Polynomial::Polynomial() {
	polysize = 0;
	param = new double[polysize];
}

Polynomial::Polynomial(double* param, int size) {
	polysize = size;
	this->param = new double[polysize];
	for (int i = 0; i < polysize; i++) {
		this->param[i] = param[i];
	}
}

Polynomial::Polynomial(const Polynomial& rhs) {
	param = new double[rhs.polysize];
	for (int i = 0; i < rhs.polysize; i++) {
		param[i] = rhs.param[i];
	}
	polysize = rhs.polysize;
}

int Polynomial::mySize() {
	int index = polysize - 1;
	while (!param[index]){
		index--;
	}
	polysize = index + 1;
	return polysize;
}

double evaluate(const Polynomial& poly, const double& var) {
	double ans = 0;
	for (int i = 0; i < poly.polysize; i++) {
		ans += (poly.param[i] * pow(var, i));
	}
	return ans;
}

Polynomial& Polynomial::operator=(Polynomial v) {
	polysize = v.polysize;
	
	param = new double[polysize];
	//param = v.param;
	for (int i = 0; i < polysize; i++) {
		param[i] = v.param[i];
	}
	
	return *this;
}

Polynomial Polynomial::operator+(Polynomial v) {

	double* temp = new double[max(polysize, v.polysize)];
	for (int i = 0; i < min(polysize, v.polysize); i++) {
		temp[i] = param[i] + v.param[i];
	}
	if (polysize > v.polysize) {
		for (int i = min(polysize, v.polysize); i < max(polysize, v.polysize); i++) {
			temp[i] = param[i];
		}
	}
	else {
		for (int i = min(polysize, v.polysize); i < max(polysize, v.polysize); i++) {
			temp[i] = v.param[i];
		}
	}
	return Polynomial(temp, max(polysize, v.polysize));
}

Polynomial operator+(double num, Polynomial v) {
	double* temp = new double[v.polysize];
	for (int i = 0; i < v.polysize; i++) {
		temp[i] = v.param[i];
	}
	temp[0] += num;
	return Polynomial(temp,v.polysize);
}

Polynomial operator+(Polynomial v, double num) {
	double* temp = new double[v.polysize];
	for (int i = 0; i < v.polysize; i++) {
		temp[i] = v.param[i];
	}
	temp[0] += num;
	return Polynomial(temp, v.polysize);
}

Polynomial Polynomial::operator-(Polynomial v) {
	double* temp = new double[max(polysize, v.polysize)];
	for (int i = 0; i < min(polysize, v.polysize); i++) {
		temp[i] = param[i] - v.param[i];
		//cout << param[i] << " " << v.param[i] << endl;
	}

	if (polysize < v.polysize) {
		for (int i = min(polysize, v.polysize); i < max(polysize, v.polysize); i++) {
			temp[i] = (-v.param[i]);
		}
	}
	else {
		for (int i = min(polysize, v.polysize); i < max(polysize, v.polysize); i++) {
			temp[i] = param[i];
		}
	}

	return Polynomial(temp, max(polysize, v.polysize));
}

Polynomial operator-(double num, Polynomial v) {
	double* temp = new double[v.polysize];
	for (int i = 0; i < v.polysize; i++) {
		temp[i] = -v.param[i];
	}
	temp[0] += num;
	return Polynomial(temp,v.polysize);
}

Polynomial operator-(Polynomial v, double num) {
	double* temp = new double[v.polysize];
	for (int i = 0; i < v.polysize; i++) {
		temp[i] = v.param[i];
	}
	temp[0] -= num;
	return Polynomial(temp, v.polysize);
}

Polynomial Polynomial::operator*(Polynomial v) {
	double* temp = new double[polysize + v.polysize - 1];
	//cout << polysize - 1 << " " << v.polysize - 1 << " " << (polysize - 1) * (v.polysize - 1) << endl;
	for (int i = 0; i < (polysize + v.polysize - 1); i++) {
		temp[i] = 0;
		for (int j = 0; j < polysize; j++) {
			for (int k = 0; k < v.polysize; k++) {
				if (j + k == i) {
					temp[i] += param[j] * v.param[k];
				}
			}
		}
		//cout << i << endl;
	}
	return Polynomial(temp, (polysize + v.polysize - 1));
}

Polynomial operator*(double num, Polynomial v) {
	double* temp = new double[v.polysize];
	for (int i = 0; i < v.polysize; i++) {
		temp[i] = num * v.param[i];
	}
	return Polynomial(temp,v.polysize);
}

Polynomial operator*(Polynomial v, double num) {
	double* temp = new double[v.polysize];
	for (int i = 0; i < v.polysize; i++) {
		temp[i] = num * v.param[i];
	}
	return Polynomial(temp, v.polysize);
}

double& Polynomial::operator[](int i) {
	if (i >= polysize) {
		double* temp = new double[polysize];
		for (int i = 0; i < polysize; i++) {
			temp[i] = param[i];
		}
		param = new double[i + 1];
		for (int i = 0; i < polysize; i++) {
			this->param[i] = temp[i];
		}
		for (int j = polysize; j <= i; j++) {
			this->param[j] = 0;
		}
		this->polysize = i + 1;
	}
	if (param[i] == -param[i]) {
		param[i] = 0;
	}
	return param[i];
}