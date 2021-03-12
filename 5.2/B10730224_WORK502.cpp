#include <iostream>
#include <string>
using namespace std;
class Atoi {

private:

	string beTrans;

	char sign;

public:

	Atoi();

	Atoi(string s);

	void SetString(string s);

	int Length();

	bool IsDigital();

	int StringToInteger();

};

int main(void) {

	string beTrans;
	while (cin >> beTrans) {
		Atoi atoi(beTrans + "20");		
		if (atoi.IsDigital()) {
			cout << atoi.Length() << endl;
			cout << atoi.StringToInteger() << endl;
			cout << sizeof(atoi.StringToInteger()) << endl;
		}
		cout << "---- - " << endl;
		atoi.SetString(beTrans);
		if (atoi.IsDigital()) {
			cout << atoi.Length() << endl;
			cout << atoi.StringToInteger() << endl;
			cout << sizeof(atoi.StringToInteger()) << endl;
		}
		cout << "---- - " << endl;
	}
	return 0;
}

Atoi::Atoi()
{
	beTrans.clear();
	sign = '+';
}

Atoi::Atoi(string s) 
{
	beTrans.clear();
	sign = '+';
	if (s.at(0)=='-') 
	{
		sign = '-';
		s.erase(0,1);
	}
	beTrans = s;	
}

void Atoi::SetString(string s)
{
	beTrans.clear();
	sign = '+';
	if (s.at(0) == '-')
	{
		sign = '-';
		s.erase(0,1);
	}
	beTrans = s;	
}

int Atoi::Length() 
{
	return beTrans.size();
}

bool Atoi::IsDigital()
{
	for (int i = 0; i < beTrans.size(); i++) 
	{
		if (beTrans.at(i) < 48 || beTrans.at(i) > 57) 
		{
			return false;
		}
	}
	return true;
}

int Atoi::StringToInteger()
{
	int result=0;
	for (int i = 0; i < beTrans.size(); i++) 
	{
		result *= 10;
		result += beTrans.at(i) - 48;		
	}
	if (sign == '-') 
	{
		result *= -1;
	}
	return result;
}
