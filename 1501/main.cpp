#include <set>  
#include <iostream>  
#include <string>
#include <fstream>
using namespace std;
int main()
{
	fstream File("name.txt"); //input
	set <string> s1;
	set <string>::iterator s1_Iter;
	string temp;
	while (getline(File, temp))  //get name
	{
		s1.insert(temp);
	}
	for (s1_Iter = s1.begin(); s1_Iter != s1.end(); s1_Iter++)  //out
		cout << *s1_Iter << endl;
}