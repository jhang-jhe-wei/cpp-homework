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
	//���o�奻���e
	const string getText();

	//�]�w�奻���e
	void setText(string Text);

	//����h��
	Document operator=(Document document);


};

//�M��r��
bool ContainsKeyword(Document& docObject, string keyword);
