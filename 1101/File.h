#pragma once
#include "document.h"
class File :public Document
{
private:
	string pathname;
public:

	//建構函式
	File(string Text, string PathName);

	//取得路徑
	string getPathname();

	//設定路徑
	void setPathname(string PathName);

	//等於多載
	File operator=(File file);
};

