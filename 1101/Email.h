#pragma once
#include "document.h"
class Email :public Document
{
private:
	string sender;
	string recipient;
	string title;
public:

	//建構函式
	Email(string Body, string Sender, string Recipient, string Title);

	//等於多載
	Email operator=(Email email);

	//設定寄件人
	void setSender(string Sender);

	//取得寄件人
	string getSender();

	//設定收件人
	void setRecipient(string Recipient);

	//取得收件人
	string getRecipient();

	//設定標題
	void setTitle(string Title);

	//取得標題
	string getTitle();

};

