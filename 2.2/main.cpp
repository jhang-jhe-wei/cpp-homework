#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	int name_largest;
	int salary_largest;
	int award_largest;
	string* name;
	string* salary;
	string* award;
	while (cin >> n) {
		name_largest = 0;
		salary_largest = 0;
		award_largest = 0;
		name = new string[n];
		salary = new string[n];
		award = new string[n];
		for (int i = 0; i < n; i++) {
			cin >> name[i];
			cin >> salary[i];
			cin >> award[i];
			if (name[i].size() > name_largest)
				name_largest = name[i].size();
			if (salary[i].size() > salary_largest)
				salary_largest = salary[i].size();
			if (award[i].size() > award_largest)
				award_largest = award[i].size();
		}
		for (int i = 0; i < n; i++) {
			cout << setw(name_largest + 3) << name[i] << "|" << setw(salary_largest + 3) << salary[i] << "|" << setw(award_largest + 3) << award[i] << endl;
		}
	}
	

}