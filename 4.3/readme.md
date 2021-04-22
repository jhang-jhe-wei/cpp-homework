# Subject: Student Records
## Description:
Write a program that records at most 10 student data by structures. There are four function for user to use:

(1)	insert (up to 10 records), (2) search, (3) delete, (4) print.

A record of a student is defined as follow:
```
typedef struct {
    char firstName[25];	
    char lastName[30];
    char phone[15];
} StRec;
```

## Input:
 Enter a string to call the function. There are four kinds of command (insert, delete search and print). Except “print” command, the other three command need to enter with firstName, lastName and phone. Use space to separate each data. The print command only needs to enter “print”.
Format of four commands:
(1) insert + firstName + lastName + phone
(E.g. insert Harry Potter 0987654321)
(2) delete + firstName + lastName + phone
(E.g. delete Harry Potter 0987654321)
(3) search + firstName + lastName + phone
(E.g. search Harry Potter 0987654321)
(4) print
(firstName <= 25 letters, lastName <= 30 letters, phone <= 15 numbers)
  User can enter command until read EOF.


## Output:
User needs to check for the input format. (1) the length of firstName or lastName or phone is too long. (2) Input is not the four commands. (3) phone is not number. If any problems meet the above conditions, print “Input Error” and re-enter a command.
When insert is called, insert the record after last record. If there are already 10 records or the record already exists (firstName and lastName and phone are the same as input data), print “Insert Error”.
When delete is called, finds the record and delete it. If it does not exist, print “Delete Error”.
When search is called, finds the record and print which index the record is in. If it does not exist, print “Search Error”.
When print is called, print all records. Please print three data and separate them by space (e.g. Harry Potter 0987654321). If there are no records, print “Print Error”.


| Sample Input	 | Sample Output |
| -------- | -------- |
|![](https://i.imgur.com/67JyzLf.png)|![](https://i.imgur.com/OCPu4xu.png)|


- [ ]  Eazy,Only basic programming syntax and structure are required.
- [x]  Medium,Multiple programming grammars and structures are required.
- [ ] Hard,Need to use multiple program structures or complex data types.