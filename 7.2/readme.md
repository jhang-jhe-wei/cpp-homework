# Subject:  Levenshtein Distance
## Description:
Levenshtein distance is a measurement method  of similar strings which measuring the difference between two sequences. The Levenshtein distance between two words is the minimum number of single-character edits.(insertions, deletions or substitutions)
For example, the Levenshtein distance between "kiitten" and "sitting" is 4. There is no way to do it fewer than four edit.
(1)	kiitten -> siitten (substitution of “s” for “k”)
(2)	siitten -> sitten (deletions of “i” at the third place of siitten)
(3)	sitten -> sittin (substitution of “i” for “e”)
(4)	sittin -> sitting (insertion of “g” at the end)
Note: Upper letter and lower letter are considered different letter.

## Input:
Enter two paragraphs of text and separate by Enter. This program allows multiple case. User can enter until read EOF.
Note: Input must be in the range of ASCII.


## Output:
Find the minimum distance between two text and print that number(int).

### Sample Input
Google
Facebook
Winter is coming
Here comes Winter
I am the bone of my sword. Steel is my body and fire is my blood. I have created over a thousand blades. Unknown to death. Nor known to life.
I am the bone of my code. Steel is my structure, and fire is my algorithm. I have fixed over a thousand bugs. Unknown to dawn. Nor known to night.


### Sample Output 
 8
14
37


- [ ]  Eazy,Only basic programming syntax and structure are required.
- [x]  Medium,Multiple programming grammars and structures are required.
- [ ] Hard,Need to use multiple program structures or complex data types.