#include "ClassTest.h"

#include <iostream>

using namespace std;

//�����ڲ���̬��������ʱ��ֻ�����ڴ棬�ڵ�һ��ʹ�õ�ʱ����ù��캯�����졣֮�����ֱ�ӷ��ز��ù���
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