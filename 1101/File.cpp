#include "file.h"

File::File(string Text, string PathName) :Document(Text), pathname(PathName)
{}

void File::setPathname(string PathName)
{
	pathname = PathName;
}

File File::operator=(File file)
{
	setText(file.getText());
	pathname = file.pathname;
	return *this;
}

string File::getPathname()
{
	return pathname;
}
