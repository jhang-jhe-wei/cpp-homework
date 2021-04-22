# Subject: Class Inheritance
## Description:
Define a class named Document that contains a member variable of type string named text that stores any textual content for the document. Create a method named getText that returns the text field, a way to set this value, and an overloaded assignment operator.
	Next, define a class for Email that is derived from Document and includes member variables for the sender, recipient, and title of an email message. Implement appropriate accessor and mutator methods. The body of the email message should be stored in the inherited variable text. Also overload the assignment operator for this class.
	Similarly, define a class for File that is derived from Document and includes a member variable for the pathname. Implement appropriate accessor and mutator methods for the pathname and overload the assignment operator. 
	Finally, create several sample objects of type Email and File in your main method. Test your objects by passing them to the following subroutine that returns true if the object contains the specified keyword in the text property.


```
bool ContainsKeyword(const Document& docObject, string keyword)
{
   if (docObject.getText().find(keyword) != string::npos)	
		return true;
   return false;
}
```
For example, you might test to see if an email message contains the text "c++" with the call  ContainsKeyword(emailObj, "c++");

## Input:
No Input for this Problem,but we will change different main function to test your Code.

## Output:
Depends on the output of testing main function.


| Sample Input	 | Sample Output |
| -------- | -------- |
|main.in	|sample.out|


- [x]  Eazy,Only basic programming syntax and structure are required.
- [ ]  Medium,Multiple programming grammars and structures are required.
- [ ] Hard,Need to use multiple program structures or complex data types.

