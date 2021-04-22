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
	//取得文本內容
	const string getText();

	//設定文本內容
	void setText(string Text);

	//等於多載
	Document operator=(Document document);


};

//尋找字串
bool ContainsKeyword(Document& docObject, string keyword);
