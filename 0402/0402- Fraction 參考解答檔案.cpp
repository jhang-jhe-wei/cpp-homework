#include<iostream>
using namespace std;
class Fraction
{
private:
	int numerator;
	int denominator;
public:
	void setNumerator(int nu)
	{
		numerator = nu;
	}
	void setDenominator(int de)
	{
		denominator = de;
	}
	void getDouble()
	{
		double v = (double)numerator / denominator;
		if (v == (int)v)
			printf("%d\n", numerator / denominator);
		else
			printf("%f\n", (double)numerator / denominator);
	}
	void outputReducedFraction()
	{
		int a = numerator;
		int b = denominator;
		while (a != 0 && b != 0)
		{
			if (a > b)
			{
				a %= b;
				if (a == 1)
					break;
			}
			else if (b >= a)
			{
				b %= a;
				if (b == 1)
					break;
			}			
		}
		int gcd = (a>b)?a:b;
		if((denominator) / gcd == 1)
			printf("%d\n", (numerator) / gcd);
		else
			printf("%d/%d\n",(numerator)/gcd,(denominator)/gcd);
	}
};
int main()
{
	Fraction f1, f2;
	f1.setNumerator(87);
	f1.setDenominator(39);	
	f1.outputReducedFraction();
	f1.getDouble();

	f2.setNumerator(39);
	f2.setDenominator(87);
	f2.getDouble();
	f2.outputReducedFraction();
	system("pause");
	return 0;
}
