#include <iostream>
using namespace std;
int main() {
	unsigned long long A;
	while (cin >> A) {
		cout << A /60 /60;
		cout << " hours ";
		cout << (A / 60) % 60;
		cout << " minutes and ";
		cout << A % 60;
		cout << " seconds";
		cout << endl;
	}
}