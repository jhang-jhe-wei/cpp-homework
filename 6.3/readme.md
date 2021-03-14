# Subject: Observation Diary
## Description:
You are experimenting on several unknown creatures to observe their evolution.
Design class “Creature” to store the status of appendages (body parts) for
each creature.
Design class “Diary” to store individual logs kept for each creature.
You may modify everything except the provided “main.cpp”.

## Input:
The main function will be replaced for each test case.
There are several available instructions, while the first line must be NewDay():

Diary::NewDay("Date???"); // Change the day of diary
Creature creatureA("CreatureA"); // A new creature named "CreatureA"
Creature creatureB("CreatureB", creatureA); // A clone (body parts) of creatureA named "CreatureB"
creatureA["BodyPartA"] = integerX; // Set the number of "BodyPartA" of "CreatureA"
creatureA["BodyPartA"] += integerY; // Add the number of "BodyPartA" of "CreatureA"
creatureA["BodyPartA"] -= integerZ; // Subtract the number of "BodyPartA" of "CreatureA"
creatureA.PrintStatus(); // Print the current status of creatureA
creatureA.PrintLog(); // Print the log of creatureA

## Output:
1.	Format of PrintStatus(): Look at sample 1.
Print the name and number of existing appendages (number > 0) sorted by name (string) in ascending order.
2.	Format of PrintLog(): Look at sample 2.
A diary (or log) starts from the target’s creation and is not copied during cloning.
Log day information when a creature is created and when NewDay() is called.
Log the change and values when the number of any appendage changes.
(appeared (0 -> X) / disappeared (X -> 0) / increased (X -> X + Y) / decreased ( X + Y -> X))
Output a new line after PrintStatus() and PrintLog().

### Sample Input/output	
#### Main 
```
Diary::NewDay("-4500m");
Creature dog("Dog");
dog["tail"] = 1;
dog["leg"] += 4;
dog["antenna"] = 0;
dog["head"] = 3;
dog.PrintStatus();
-------------------------------
Diary::NewDay("00");
Diary::NewDay("01");
Creature fox("Fox");
fox["tail"] += 1;
fox["tail"] -= -8;
fox["tail"] = 9;
Diary::NewDay("10");
fox["tail"] += -8;
fox["tail"] = 0;
Diary::NewDay("11");
fox.PrintLog();
---------------------------------
Diary::NewDay("0000");
Creature unknownA("UA");
unknownA["leg"] = 16;

Diary::NewDay("0102");
Creature unknownB("UB", unknownA);
unknownB["leg"] += 26;
unknownA.PrintLog();

Diary::NewDay("0227");
unknownA["leg"] = 0;
unknownA.PrintStatus();
unknownB.PrintLog();

Diary::NewDay("0353");
unknownA["leg"] += 6;
unknownA["wing"] += 4;
unknownA.PrintLog();
```

#### Sample Output 
```
Dog's status:
head * 3
leg * 4
tail * 1
-------------------------------
Fox's log:
Day 01
Fox's tail appeared (0 -> 1).
Fox's tail increased (1 -> 9).
Day 10
Fox's tail decreased (9 -> 1).
Fox's tail disappeared (1 -> 0).
Day 11
--------------------------------
UA's log:
Day 0000
UA's leg appeared (0 -> 16).
Day 0102

UA's status:

UB's log:
Day 0102
UB's leg increased (16 -> 42).
Day 0227

UA's log:
Day 0000
UA's leg appeared (0 -> 16).
Day 0102
Day 0227
UA's leg disappeared (16 -> 0).
Day 0353
UA's leg appeared (0 -> 6).
UA's wing appeared (0 -> 4).
```

- [ ]  Eazy,Only basic programming syntax and structure are required.
- [x]  Medium,Multiple programming grammars and structures are required.
- [ ] Hard,Need to use multiple program structures or complex data types.

![](https://i.imgur.com/2LUC6J5.png)
![](https://i.imgur.com/PWzv1iJ.png)
![](https://i.imgur.com/qzpGjVj.png)