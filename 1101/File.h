#pragma once
#include "document.h"
class File :public Document
{
private:
	string pathname;
public:

	//�غc�禡
	File(string Text, string PathName);

	//���o���|
	string getPathname();

	//�]�w���|
	void setPathname(string PathName);

	//����h��
	File operator=(File file);
};

