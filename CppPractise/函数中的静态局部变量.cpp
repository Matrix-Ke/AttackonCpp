#include "ClassTest.h"

#include <iostream>

using namespace std;

//�����ڲ���̬��������ʱ��ֻ�����ڴ棬�ڵ�һ��ʹ�õ�ʱ����ù��캯�����졣֮�����ֱ�ӷ��ز��ù���
ClassTest&  foo()
{
	static ClassTest  instanceClass;
	return instanceClass;
}

class Bar
{
public:
	~Bar()
	{
		std::cout << " Bar deconstructor has been called\n";
	}
};

int main()
{
	//ClassTest  c = foo();
	//c.printClassInfo();
	//foo();
	char   a[] = "a";
	char   b[] = "b";
	char   c[] = "c";
	char d[] = "d";
	char e[] = "e";
	unsigned  int index = 0;
	static ClassTest   aT(a);
	static ClassTest   bT(b);
	static ClassTest   cT(c);
	static ClassTest   dT(d);
	static ClassTest   eT(e);

	return	0;
}