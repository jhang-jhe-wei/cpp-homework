#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef struct {
	char firstName[25];
	char lastName[30];
	char phone[15];
} StRec;

int main()
{
	string mode;
	string firstName;
	string lastName;
	string phone;
	vector<StRec> data;
	bool error = false;
	while (cin >> mode )
	{
		
		if (mode == "print") 
		{
			if (data.empty()) 
			{
				cout << "Print Error" << endl;
			}
			else 
			{
				for (int i = 0; i < data.size(); i++) 
				{
					cout << data.at(i).firstName << ' ' << data.at(i).lastName << ' ' << data.at(i).phone << endl;
				}
			}
		}
		else 
		{
			cin >> firstName >> lastName >> phone;
			error = false;
			if (firstName.size() > 25 || lastName.size() > 30 || phone.size() > 15)
			{
				cout << "Input Error" << endl;
				continue;
			}
			for (int i = 0; i < phone.size(); i++)
			{
				int tmp = (int)phone[i];
				if (tmp >= 48 && tmp <= 57)
				{
					continue;
				}
				else
				{
					cout << "Input Error" << endl;
					error = true;
					break;
				}
			}
			if (error)
			{
				continue;
			}
			if (mode == "insert")
			{
				if (data.size() >= 10)
				{
					cout << "Insert Error" << endl;
					continue;
				}
				for (int i = 0; i < data.size(); i++) {
					if (data.at(i).firstName == firstName && data.at(i).lastName == lastName && data.at(i).phone == phone)
					{
						cout << "Insert Error" << endl;
						error = true;
						break;
					}
				}
				if (error)
				{
					continue;
				}
				StRec model;
				strncpy_s(model.firstName, firstName.c_str(), firstName.length() + 1);
				strncpy_s(model.lastName, lastName.c_str(), lastName.length() + 1);
				strncpy_s(model.phone, phone.c_str(), phone.length() + 1);
				data.push_back(model);
			}
			else if (mode == "search")
			{
				for (int i = 0; i < data.size(); i++) {
					if (data.at(i).firstName == firstName && data.at(i).lastName == lastName && data.at(i).phone == phone)
					{
						cout << i << endl;
						error = true;
					}					
				}
				if (error)
				{
					continue;
				}
				cout << "Search Error" << endl;
			}
			else if (mode == "delete")
			{
				for (int i = 0; i < data.size(); i++) {
					if (data.at(i).firstName == firstName && data.at(i).lastName == lastName && data.at(i).phone == phone)
					{
						data.erase(data.begin() + i);
						error = true;
					}					
				}
				if (error)
				{
					continue;
				}
				cout << "Delete Error" << endl;
			}
			else
			{
				cout << "Input Error" << endl;
				continue;
			}
		}
		
	}
}