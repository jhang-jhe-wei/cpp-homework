// Name: wells
// Date: 2019/4/28
// Last Update: 2019/4/28
// Problem statement: namespace
#include <iostream>
#include <string>
#include "password.cpp"
using namespace std;
string username;
namespace Authenticate    //輸入username
{
	int isValid();
	void inputUserName()
	{
		do
		{
			cout << "Enter your username (8 letters only)" << endl;
			cin >> username;
		} while (!isValid());
	}
	string getUserName()  //傳出username
	{
		return username;
	}

	int isValid()  //判斷username
	{
		if (username.length() < 8)
			return 0;
		for (int i = 0; i < username.length(); i++)
		{
			if (username[i] <= '9'&&username[i] >= '0')
				return 0;
		}
		return 1;
	}
}

using namespace Authenticate;
int main()
{
	inputUserName();
	inputPassword();
	cout << "Your username is " << getUserName() << " and your password is: "
		<< getPassword() << endl;
	return 0;
}
