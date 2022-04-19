#include "ClassTest.h"

#include <iostream>

using namespace std;

//函数内部静态变量声明时候只分配内存，在第一次使用的时候调用构造函数构造。之后调用直接返回不用构造
ClassTest&  foo()
{
	static ClassTest  instanceClass;
	return instanceClass;
}

int main()
{
	ClassTest  c = foo();
	c.printClassInfo();

	foo();

	return	0;
}