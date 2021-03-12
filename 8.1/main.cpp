//Author:wells
//Date:2019/4/20
//Last Updata:2019/4/20
//Problem statement:Matrix multiplication
#include<iostream>
using namespace std;
void inputMatrix(int**& ary,int row,int col)//將元素輸入至陣列
{
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			cin >> ary[i][j];
}
int** multiplyMatrix(int** ary, int row, int col, int** ary2, int row2, int col2)//2個陣列相乘，並回傳一個陣列
{
	int** C = nullptr;
	C = new int*[row];
	for (int i = 0; i < row; i++)
	{
		C[i] = new int[col2];
	}
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col2; ++j) {
			C[i][j] = 0;
			for (int k = 0; k < row2; ++k)
				C[i][j] += ary[i][k] * ary2[k][j];			
		}		
	}
	return C;
}
void outputMatrix(int** ary, int row, int col)//輸出傳入的陣列
{
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {		
			cout << ary[i][j] << " ";				
		}
		cout << endl;
	}
}
int main(void)
{
	int a, b, c, d;
	while (cin >> a >> b >> c >> d) {
		if (b != c) cout << "Matrix multiplication failed." << endl;
		else {
			int** A = nullptr;
			int** B = nullptr;			
			A = new int*[a];
			for (int i = 0; i < a; i++) 
			{
				A[i] = new int[b];
				
			}
			B = new int*[b];
			for (int i = 0; i < c; i++)
			{
				B[i] = new int[d];
				
			}			
			inputMatrix(A, a, b);
			inputMatrix(B, c, d);			
			outputMatrix(multiplyMatrix(A, a, b, B, c, d),a,d);
		}
	}
	return 0;
}