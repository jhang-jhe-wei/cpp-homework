//Author:wells
//Date:2019/4/17
//Last Updata:2019/4/17
//Problem Statement:File copy
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char* argv[])
{
	ifstream in;
	ofstream out;
	in.open(argv[1], ios::in | ios::binary);//cmd上文字如./myCopyFile.exe Source.txt Out.txt則argv[0]=./myCopyFile.exe，argv[1]=Source.txt>，argv[2]=Out.txt
	out.open(argv[2], ios::out | ios::binary);
	if (!in.is_open() || !out.is_open())
	{
		cout << "Open Error!";
	}
	else
	{
		while (!in.eof())
		{
			out.put(in.get());
		}
	}
	return 0;
}