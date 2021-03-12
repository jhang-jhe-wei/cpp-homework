#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float in;
	float tax;
	while (cin >> in) {
		if (in < 0)
			continue;
		if (in <= 750) {
			tax = in * 0.01;
		}
		else if (in <= 2250) {
			in -= 750;
			tax = 7.50 + in * 0.02;
		}
		else if (in <= 3750) {
			in -= 2250;
			tax = 37.50 + in * 0.03;
		}
		else if(in <= 5250) {
			in -= 3750;
			tax = 82.50 + in * 0.04;
		}
		else if (in <= 7000) {
			in -= 5250;
			tax = 142.50 + in * 0.05;
		}
		else{
			in -= 7000;
			tax = 230.00 + in * 0.06;
		}
		cout << fixed << setprecision(2) << tax << endl;
	}
}