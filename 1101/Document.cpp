#include "document.h"

Document::Document(string Body)
{
	text = Body;
}

const string Document::getText()
{
	return text;
}

void Document::setText(string Text)
{
	text = Text;
}

Document Document::operator=(Document document)
{
	text = document.text;
	return *this;
}

bool ContainsKeyword(Document & docObject, string keyword)
{
	if (docObject.getText().find(keyword) != string::npos)
		return true;
	return false;
}

