# Subject: Matrix Multiplication
## Description:
Please write a program, give two matrices A and B (row major), the size is rowA x colA and rowB x colA respectively, the type of the element in matrix is integer, please multiply the A and B matrices and output the result.
Please define and implement the following function：
inputMatrix(…)：Read in the elements of the specified size matrix.
multiplyMatrix(…)：Multiplication of the two matrices.
outputMatrix(…)：Print out the elements of the specified size matrix.


## Input:
1.The size of matrix A and matrix B are both input in the first line.
2.Input the number of the row and the column in matrix A.
3.Input the number of the row and the column in matrix B.
4.Call the function inputMatrix(…) which writes the elements of the matrix.

## Output:
If A and B can multiply, then call the function multiplyMatrix(…) and outputMatrix(…);else print out the string“Matrix multiplication failed.”.
outputMatrix(…) When outputting, each element is separated by a space, and arriving the number of the column is to be wrapped.


| Sample Input	 | Sample Output |
| -------- | -------- |
|3 2 2 3<br>1 2 3 4 5 6<br>6 5 4 3 2 1|12 9 6<br>30 23 16<br>48 37 26|


- [x]  Eazy,Only basic programming syntax and structure are required.
- [ ]  Medium,Multiple programming grammars and structures are required.
- [ ] Hard,Need to use multiple program structures or complex data types.


## Other notes:
The condition for multiplying two matrices: the number of columns of the A matrix is equal to the number of rows of the B matrix.
Multiplying two matrices: the elements of the i-th row of the j-th column of the matrix are equal to the i-th row of the A matrix and the j-th column of the B matrix are respectively multiplied and then added.