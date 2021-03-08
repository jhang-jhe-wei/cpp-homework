#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double n, r, g;
	cout << fixed << setprecision(2);
	while (cin >> n)
	{
		g = n / 2.0;
		do
		{
			r = g;
			g = (g + n / g) / 2.0;
		} while (abs(g - r) >= 0.01);
		cout << g << "\n";
	}
}