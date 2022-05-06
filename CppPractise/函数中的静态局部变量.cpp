//#include "ClassTest.h"
//
//#include <iostream>
//
//using namespace std;
//
////函数内部静态变量声明时候只分配内存，在第一次使用的时候调用构造函数构造。之后调用直接返回不用构造
//BaseClass&  foo()
//{
//	static BaseClass  instanceClass;
//	return instanceClass;
//}
//
//class Bar
//{
//public:
//	~Bar()
//	{
//		std::cout << " Bar deconstructor has been called\n";
//	}
//};
//
//int main()
//{
//	//BaseClass  c = foo();
//	//c.printClassInfo();
//	//foo();
//	char   a[] = "a";
//	char   b[] = "b";
//	char   c[] = "c";
//	char d[] = "d";
//	char e[] = "e";
//	unsigned  int index = 0;
//	static BaseClass   aT(a);
//	static BaseClass   bT(b);
//	static BaseClass   cT(c);
//	static BaseClass   dT(d);
//	static BaseClass   eT(e);
//
//	return	0;
//}