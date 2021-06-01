#include "email.h"

Email::Email(string Body, string Sender, string Recipient, string Title)
	:Document(Body), sender(Sender), recipient(Recipient), title(Title)
{}

Email Email::operator=(Email email)
{
	setText(email.getText());
	sender = email.sender;
	recipient = email.recipient;
	title = email.title;
	return *this;
}

void Email::setSender(string Sender)
{
	sender = Sender;
}

string Email::getSender()
{
	return sender;
}

void Email::setRecipient(string Recipient)
{
	recipient = Recipient;
}

string Email::getRecipient()
{
	return recipient;
}

void Email::setTitle(string Title)
{
	title = Title;
}

string Email::getTitle()
{
	return title;
}
