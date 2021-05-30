#pragma once
#include <string>
#include <iostream>
using namespace std;
class Document
{
private:
	string text;
public:
	Document(string Body);

	const string getText();

	void setText(string Text);

	Document operator=(Document document);


};

bool ContainsKeyword(Document& docObject, string keyword);
