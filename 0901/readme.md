# Subject: Reversal
## Description:
The text file words.txt, which is included, contains an alphabetically sorted list of English words.  Note that the words are in mixed upper and lowercase.
Write a program that reads this file and finds the longest word that reverses to a different word.  For example, "stun" reverses to make the word "nuts" but is only four letters long.  Find the longest such word. 
Depending upon the speed of your computer and your implementation, execution of this program may take from minutes to hours.


## Input:
words.txt


## Output:
The longest reverses word.


| Sample Input	 | Sample Output |
| -------- | -------- |
|words.txt	|desserts|


- [ ]  Eazy,Only basic programming syntax and structure are required.
- [x]  Medium,Multiple programming grammars and structures are required.
- [ ] Hard,Need to use multiple program structures or complex data types.

## Other Notes:
本題的相關檔案如下(僅供參考)
main.in:
```
int main()
{
	// Create several test objects
	Email email1("Body about programming in C++",
		"Larry", "Curly", "Programming");
	Email email2("Body about running marathons",
		"Speedy", "Gonzales", "races");

	File file1("Contents about some C++ file", "file.txt");
	File file2("Contents about marathon races", "run.txt");

	cout << "Which contains C++?" << endl;
	if (ContainsKeyword(email1, "C++")) cout << " Email1" << endl;
	if (ContainsKeyword(email2, "C++")) cout << " Email2" << endl;
	if (ContainsKeyword(file1, "C++")) cout << " File1" << endl;
	if (ContainsKeyword(file2, "C++")) cout << " File2" << endl;

	// Test our assignment operator
	file2 = file1;
	file2.setPathname("c:");
	cout << "After assignment file2=file1 and file2.setPathname(\"c:\"): "
		<< endl;
	cout << "File1's path = " << file1.getPathname() << endl;
	cout << "File2's path = " << file2.getPathname() << endl;
	
	return 0;
}
```
sample.out:

Which contains C++?
 Email1
 File1
After assignment file2=file1 and file2.setPathname("c:"): 
File1's path = file.txt
File2's path = c:
