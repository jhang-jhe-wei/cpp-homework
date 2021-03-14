# Subject: Collatz Conjecture
## Description:
Collatz conjecture, which also known as 3N+1 conjecture, is a conjecture in mathematics that concerns a sequence defined as follows:
(1) Input N
(2) If N equals 1, end calculation
(3) ![](https://i.imgur.com/LzRpJ35.png)
(4) Goto Step 2
All the positive number that smaller than 1 million use this method to calculate will finally equal 1. You need to find out how many times you check if N equal 1 (include the number itself). The times of calculation is cycle length.
For example, if 22 is inputted,
the result will be: 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
the cycle length of 22 is 16.


## Input:
Enter a pair of positive integer i and j, separate by space. This program allows multiple test. User can enter until read EOF. (0 < i,j < 1,000,000)

## Output:
Find the maximum cycle length that can be produced by any numbers between i and j (include i and j). Print i, j and the maximum cycle length, separate by space.

| Sample Input	 | Sample Output |
| -------- | -------- |
|1 10<br>200 100<br>201 210<br>900 1000<br>200| 1 10 20<br>200 100 125<br>201 210 89<br>900 1000 174|


- [x]  Eazy,Only basic programming syntax and structure are required.
- [ ]  Medium,Multiple programming grammars and structures are required.
- [ ] Hard,Need to use multiple program structures or complex data types.