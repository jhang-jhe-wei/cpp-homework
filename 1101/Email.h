#pragma once
#include "document.h"
class Email :public Document
{
private:
	string sender;
	string recipient;
	string title;
public:

	//�غc�禡
	Email(string Body, string Sender, string Recipient, string Title);

	//����h��
	Email operator=(Email email);

	//�]�w�H��H
	void setSender(string Sender);

	//���o�H��H
	string getSender();

	//�]�w����H
	void setRecipient(string Recipient);

	//���o����H
	string getRecipient();

	//�]�w���D
	void setTitle(string Title);

	//���o���D
	string getTitle();

};

