//Author:wells
//Date:2019/4/11
//Last Updata:2019/4/11
//Problem Statement:Seven-segment Display
#include <iostream>
using namespace std;
int main() 
{
	char in[100];
	while (cin >> in) //input
	{
		for (int i = 0; i < 3; i++) //決定行數
		{			
			for (int j = 0; j <= 100; j++) //第一行
			{
				if (in[j] < 48 || in[j]>57) 
				{
					continue;
				}
				if (i == 0) 
				{
					if (in[j] == 49 || in[j] == 52) 
					{
						cout << "   ";
					}
					else 
					{
						cout << " _ ";
					}
				}
				else if (i == 1) //第二行
				{
					switch (in[j])
					{
					case 48:
						cout << "| |";
						break;
					case 49:
						cout << "  |";
						break;
					case 50:
						cout << " _|";
						break;
					case 51:
						cout << " _|";
						break;
					case 52:
						cout << "|_|";
						break;
					case 53:
						cout << "|_ ";
						break;
					case 54:
						cout << "|_ ";
						break;
					case 55:
						cout << "| |";
						break;
					case 56:
						cout << "|_|";
						break;
					case 57:
						cout << "|_|";
						break;
					default:
						break;
					}
				}
				else if (i == 2) //第3行
				{
					switch (in[j])
					{
					case 48:
						cout << "|_|";
						break;
					case 49:
						cout << "  |";
						break;
					case 50:
						cout << "|_ ";
						break;
					case 51:
						cout << " _|";
						break;
					case 52:
						cout << "  |";
						break;
					case 53:
						cout << " _|";
						break;
					case 54:
						cout << "|_|";
						break;
					case 55:
						cout << "  |";
						break;
					case 56:
						cout << "|_|";
						break;
					case 57:
						cout << "  |";
						break;
					default:
						break;
					}
				}
			}
			cout << endl;			
		}
		for (int i = 0; i <= 100; i++)
		{
			in[i] = ' ';
		}
	}
}