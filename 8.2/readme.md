# Subject: Memory Simulator
## Description:
Given an integer N, representing the memory size(N Bytes) of the system configuration, the starting position is 0, the end is N-1, and the initial content is 0, followed by k commands.
The command format is one of the following forms:
•	Set Address Type Value: Change the specified variable value to Value, that locates at the memory address Address, and the data type is Type, and the data type is Type, Type is only four kind and all are unsigned:
char(1 Byte), short(2 Bytes), int(4 Bytes), String(Need to append null character(NULL) at the end by self, if the output cannot find the null character, output to the last of the system configuration, please.).
e.g.: Set 255 int 0
•	Get 10004 int: Get the variable value at the memory address Address that data type is Type(same as used by Set), and output that.
e.g.: Get 10004 int
Address and Value are always in decimal. In addition, char is treated as an integer here and does not consider the character situation.
Notes, When the following occurs need to output "Violation Access":
•	The written data (not include the null character of the string) exceeds the allocated memory but needs to be written to the part that is not exceeded.
•	The data of read is exceed the memory allocated.
•	Address < 0.
The figure below shows how the program gets the result.
![](https://i.imgur.com/MtxgKRg.png)


## Input:
The input begins with an integer N(216 >= N > 0) on a line, the next line gives the number of commands, an integer k(1000 >= k >= 0), and the command and the arguments are separated by space.If you read EOF when you enter N, the program ends.


## Output:
Output according to the description of the topic.


| Sample Input	 | Sample Output |
| -------- | -------- |
|6<br>Set 0 String H   i<br>Set 1 int 3158064<br>Set 4 short 13878<br>Set 6 char 0<br>Get 0 String<br>Get 1000 int|H00066<br>Violation Access.|

	
- [ ]  Eazy,Only basic programming syntax and structure are required.
- [x]  Medium,Multiple programming grammars and structures are required.
- [ ] Hard,Need to use multiple program structures or complex data types.