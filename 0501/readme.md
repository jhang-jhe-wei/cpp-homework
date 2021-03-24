# Subject: Hot dog stand
## Description:
You operate several hot dog stands distributed throughout town. Define a class named HotDogStand that has a member variable for the hot dog stand’s ID number and a member variable for how many hot dogs the stand sold that day. Create a constructor that allows a user of the class to initialize both values.  Also create a function named justSold that increments the number of hot dogs the stand has sold by one. This function will be invoked each time the stand sells a hot dog so that you can track the total number of hot dogs sold by the stand. Add another function named thisStandSoldAmount that returns the number of hot dogs sold.  Add a static variable that tracks the total number of hot dogs sold by all hot dog stands and a static function named allStandSoldAmount that returns the value in this variable. Finally, add function named print that prints this stand’s ID and how many hot dogs have sold that day, which a space between them. Write a main function to test your class with at least three hot dog stands that each sell a variety of hot dogs.


## Input:
No input.

## Output:
As the following sample.

### Sample Input
```
int main(void)
{
	HotDogStand stand1("Stand1", 0);
	HotDogStand stand2("Stand2", 100);
	HotDogStand stand3("Stand3");
	stand1.justSold();
	stand2.justSold();
	stand3.justSold();
	stand1.print();
	stand2.print();
	stand3.print();
	std::cout << "Total Sold : " << HotDogStand::allStandSoldAmount() << std::endl;
	return 0;
}

```

### Sample Output
Stand1 1 
Stand2 101 
Stand3 1 
Total Sold : 103 


- [x]  Eazy,Only basic programming syntax and structure are required.
- [ ]  Medium,Multiple programming grammars and structures are required.
- [ ] Hard,Need to use multiple program structures or complex data types.

