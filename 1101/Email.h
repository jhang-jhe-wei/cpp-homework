#pragma once
#include "document.h"
class Email :public Document
{
private:
	string sender;
	string recipient;
	string title;
public:

	Email(string Body, string Sender, string Recipient, string Title);

	Email operator=(Email email);

	void setSender(string Sender);

	string getSender();

	void setRecipient(string Recipient);

	string getRecipient();

	void setTitle(string Title);

	string getTitle();

};

