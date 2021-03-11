#include <iostream>
using namespace std;
int main(){
	
	int in;
	int largest = INT_MIN;
	int smallest = INT_MAX;
	int counter = 0;
	while (cin >> in) {
		counter++;
		if (in > largest) {
			largest = in;
		}
		else if (in < smallest) {
			smallest = in;
		}
		if (counter == 4) {
			cout << "Largest: " << largest << endl;
			cout << "Smallest: " << smallest << endl;
			counter = 0;
			largest = 0;
			smallest = 0;
		}
	}	
}


