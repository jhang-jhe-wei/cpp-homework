// Name: wells
// Date: 2019/4/28
// Last Update: 2019/4/28
// Problem statement: namespace
#include <iostream>
#include <string>
using namespace std;
namespace
{
	int isValid();
	string password;
	void inputPassword() //輸入密碼
	{
		do
		{
			cout << "Enter your password (at least 8 characters " <<
				"and at least one non-letter)" << endl;
			cin >> password;
		} while (!isValid());
	}
	string getPassword()//取得密碼
	{
		return password;
	}

	int isValid()  //密碼是否有效
	{
		if (password.length() < 8)
			return 0;
		for (int i = 0; i < password.length(); i++)
			if (password[i] >= '0'&&password[i] <= '9')
				return 1;
		return 0;
	}
}

