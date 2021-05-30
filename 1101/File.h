#pragma once
#include "document.h"
class File :public Document
{
private:
	string pathname;
public:

	File(string Text, string PathName);

	string getPathname();

	void setPathname(string PathName);

	File operator=(File file);
};

