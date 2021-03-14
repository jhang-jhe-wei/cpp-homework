# Subject: Advanced Class Point in plane
## Description:
Write a class that convert a string into an integer. For example, given the string “1234” the function should return the integer 1234.If you do some research, you will find that there is a function named atoi and also the stringstream class that can do this conversion for you. However, in this Programming Project, you should write your own Atoi class to do the conversion. 

```
class Atoi {

private:

     string beTrans;

     char sign;

public:

     Atoi();

     Atoi(string s);

     void SetString(string s);

     int Length();

     bool IsDigital();

     int StringToInteger();

};
```



## Input:
Please use the code below as main function, inputs are numbers.

```
int main(void) {

	string beTrans;
	while (cin >> beTrans) {
		Atoi atoi(beTrans + "20");
		if (atoi.IsDigital()) {
			cout << atoi.Length() << endl;
			cout << atoi.StringToInteger() << endl;
			cout << sizeof(atoi.StringToInteger()) << endl;
		}
		cout<<”-----”<<endl;
		atoi.SetString(beTrans);
		if (atoi.IsDigital()) {
			cout << atoi.Length() << endl;
			cout << atoi.StringToInteger() << endl;
			cout << sizeof(atoi.StringToInteger()) << endl;
		}
		cout<<”-----”<<endl;
	}
	return 0;
}
```
## Output:

### Sample Input/Output
| Sample Input	 | Sample Output |
| -------- | -------- |
| 05<br>11<br>23<br>-10<br>0<br>-11<br>8946<br>1891231|4<br>520<br>4<br>-----<br>2<br>5<br>4<br>-----<br>4<br>1120<br>4<br>-----<br>2<br>11<br>4<br>-----<br>4<br>2320<br>4<br>-----<br>2<br>23<br>4<br>-----<br>4<br>-1020<br>4<br>-----<br>2<br>-10<br>4<br>-----<br>3<br>20<br>4<br>-----<br>1<br>0<br>4<br>-----<br>4<br>-1120<br>4<br>-----<br>2<br>-11<br>4<br>-----<br>6<br>894620<br>4<br>-----<br>4<br>8946<br>4<br>-----<br>9<br>189123120<br>4<br>-----<br>7<br>1891231<br>4<br>-----|

- [x]  Eazy,Only basic programming syntax and structure are required.
- [ ]  Medium,Multiple programming grammars and structures are required.
- [ ] Hard,Need to use multiple program structures or complex data types.