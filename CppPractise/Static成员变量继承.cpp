#include "ClassTest.h"

int main()
{
	BaseClass   foo;
	foo.mStaticNum = 9999;
	ChildClass  bar;
	bar.printClassInfo();

	return 0;
}