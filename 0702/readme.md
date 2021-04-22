# Subject: Array To Interger
## Description:
Write a class that convert a string into an integer. For example, given the string “1234” the function should return the integer 1234.If you do some research, you will find that there is a function named atoi and also the stringstream class that can do this conversion for you. However, in this Programming Project, you should write your own code to do the conversion. Also write a suitable test program.

!!!Using class.

```
class Atoi {
private:
	string beTrans;
	char sign;
public:
	Atoi();
	Atoi(string s);
	void SetString(string s);
	const string GetString();
	int Length();
	bool IsDigital();
	int StringToInteger();
};

```


## Input:
input_main.cpp，input.txt

## Output:
output.txt
**要輸出atoi前+20的數字和直接atoi的數字**
Length()是多少個數字
StringToInteger()是印出轉換後的數字



## 第一組測資與輸出	
### Sample Input	
input_main.cpp
05
11
23
-10
-11
8946	
### Sample Output
4
520
4
2
5
4
4
1120
4
2
11
4
4
2320
4
2
23
4
4
-1020
4
2
-10
4
4
-1120
4
2
-11
4
6
894620
4
4
8946
4

## 第二組	
### Sample Input
input_main.cpp
46506
-096504
56400
00494	
### Sample Output
7
4650620
4
5
46506
4
8
-9650420
4
6
-96504
4
7
5640020
4
5
56400
4
7
49420
4
5
494
4

- [ ]  Eazy,Only basic programming syntax and structure are required.
- [ ]  Medium,Multiple programming grammars and structures are required.
- [x] Hard,Need to use multiple program structures or complex data types.