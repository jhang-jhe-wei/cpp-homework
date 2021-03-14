# Subject: Print Standard Format
## Description:
You are a IT employee in a company, your manager request you to print out N employee’s information, as make sure the result remains clean. Every employee has information of Name, Salary, Bonus. 

## Input:
Input Integer N(10^6 >= N > 0) at the start of the line. With next N pieces of employee information. Every information comes with three data: Name, Salary(Between 10^9 ~ 0) and Award(Between 10^9 ~ 0) .Separate three data with space.

*The name doesn’t contain space.

Program ends after reading of EOF.

## Output:
For every test data(from this input N to next input N, is a pair of test data.)Please make sure the width of every column is same as the longest width of other all data in that column. Besides, separate columns with symbol |. Symbol | separates two spaces away from other data.


| Sample Input	 | Sample Output |
| -------- | -------- |
|    3<br>Alexandrescu 20000000 99999<br>Frank 100000 50<br>Andy 1 1<br>4<br>Andy 100 200<br>Anna 400 9999<br>Lipp 200 200<br>Stan 500 200|   Alexandrescu\|  20000000\|  99999<br>       Frank\|    100000\|     50<br>     Andy\|         1\|      1<br>Andy\|  100\|   200<br>Anna\|  400\|  9999<br>Lipp\|200\|   200<br>Stan\|  500\|   200     |


- [x]  Eazy,Only basic programming syntax and structure are required.
- [ ]  Medium,Multiple programming grammars and structures are required.
- [ ] Hard,Need to use multiple program structures or complex data types.
