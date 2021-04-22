# Subject: FormWord
## Description:
Some word games require the player to find words that can be formed using the letters of another word. For example, given the word SWIMMING then other words WING, SING, MIMING, etc. Write a program that lets the user set a word and then output all the words contained in the file words.txt that can be formed from the letters of the set word. Please use the following partial class member function to do your project. 
```
Class Form { 
private: 
string input; 
string fileName; 
public: 
void SetInputWord(string inputWord);
void ProcessInputWord();
void SetFileName(string fileName);
void Load_CompaerWord();
void PrintFoundWords();
};

```
Please note that the comparison is not case-sensitive, but the output should keep the case of the original file.

## Input:
main.in & words.txt

## Output:
sample.out


| Sample Input	 | Sample Output |
| -------- | -------- |
|main.in|sample.out|


- [ ]  Eazy,Only basic programming syntax and structure are required.
- [x]  Medium,Multiple programming grammars and structures are required.
- [ ] Hard,Need to use multiple program structures or complex data types.