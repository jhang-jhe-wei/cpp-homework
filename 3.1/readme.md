# Subject: Input_Output3
## Description:
Given an arbitrary number X(double), a positive integer M, a positive integer N, and a character C, please output it as follows: 

- [ ] The decimal (excluding the decimal point) must occupy N characters in the output and the decimal number N digits must be unconditionally discarded. If the decimal part of X is less than N digits, please make up 0.
- [ ] If the corrected number of X characters (including negative and decimal points) is less than M words, please fill in the input character C at the beginning of the number, so that the number of characters C plus the number itself contains exactly the number of characters. Meet the M digits.



## Input:
Each line represents a group of X, M, N, and C. The four inputs are separated by spaces.
The program continues to ask for input, and ends if EOF is read.
Please note that C may be a space.


## Output:
Each line is output according to the requirements of the topic.


| Sample Input	 | Sample Output |
| -------- | -------- |
|    3.14159265358979323846 5 2 G      |    G3.14      |
|   3.14 8 3 X       |    XXX3.140      |
|       3 8 0 C   | 	CCCCCCC3         |
| -3 8 5 C     | -3.00000   |



- [ ]  Eazy,Only basic programming syntax and structure are required.
- [x]  Medium,Multiple programming grammars and structures are required.
- [ ] Hard,Need to use multiple program structures or complex data types.
