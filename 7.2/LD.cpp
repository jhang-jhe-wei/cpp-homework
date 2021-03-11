//Author:wells
//Date:2019/4/11
//Last Updata:2019/4/11
//Problem Statement:LD
#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#pragma warning(disable:4996)
using std::min;
using namespace std;
int lena, lenb;
string a, b;
void read() {//讀取
	getline(cin, a, '\n');
	getline(cin, b, '\n');
	lena = a.length();
	lenb = b.length();
}

int dp[1010][1010];
void work() //演算法
{
	for (int i = 1; i <= lena; i++) dp[i][0] = i;
	for (int j = 1; j <= lenb; j++) dp[0][j] = j;
	for (int i = 1; i <= lena; i++)
		for (int j = 1; j <= lenb; j++)
			if (a[i - 1] == b[j - 1])
				dp[i][j] = dp[i - 1][j - 1];
			else
				dp[i][j] = min(dp[i - 1][j - 1], min(dp[i][j - 1], dp[i - 1][j])) + 1;
	printf("%d\n", dp[lena][lenb]);
}

int main() {
	while (1)//持續讀取
	{
		read();
		work();
	}
	return 0;
}