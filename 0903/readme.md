# Subject: Namespace
## Description:
This Programming Project explores how the unnamed namespace works.
Listed below are snippets from a program to perform input validation for a username and password. The code to input and validate the username is in a separate file than the code to input and validate the password.

File header user.cpp:
```
namespace Authenticate
{
  void inputUserName()
  {
	do
	{
 	cout << "Enter your username (8 letters only)" << endl;
 	cin >> username;
	} while (!isValid());
  }
 
  string getUserName()
  {
 	return username;
  }
}

```
Define the username variable and the isValid() function in the unnamed namespace so the code will compile. The isValid() function should return true if username contains exactly eight letters.  Generate an appropriate header file for this code.
Repeat the same steps for the file password.cpp, placing the password variable and the isValid() function in the unnamed namespace.  In this case, the isValid() function should return true if the input password has at least 8 characters including at least one non-letter:

File header password.cpp:
```
namespace Authenticate
{
  void inputPassword()
  {
	do
	{
 	cout << "Enter your password (at least 8 characters " <<
         	"and at least one non-letter)" << endl;
 	cin >> password ;
	} while (!isValid());
  }
 
  string getPassword()
  {
 	return password;
  }
}

```
At this point you should have two functions named isValid(), each in different unnamed  namespaces.   Place the following main function in an appropriate place.  The program should compile and run.
```
int main()
{
  inputUserName();
  inputPassword();
  cout << "Your username is " << getUserName() <<
      	" and your password is: " <<
      	getPassword() << endl;
  return 0;
}
```

## Input:
username and password

## Output:
username and password

| Sample Input	 | Sample Output |
| -------- | -------- |
|aaa<br>aaaaaa<br>abcdefghi<br>abcdefgh<br>aaaaaaaaaa1|Enter your username (8 letters only)<br>Enter your<br>username (8 letters only)<br>Enter your username (8 letters only)<br>Enter your username (8 letters only)<br>Enter your password (at least 8 characters and <br>at least one non-letter)<br>Your username is abcdefgh and your password is:<br> aaaaaaaaaa1|


- [ ]  Eazy,Only basic programming syntax and structure are required.
- [x]  Medium,Multiple programming grammars and structures are required.
- [ ] Hard,Need to use multiple program structures or complex data types.

