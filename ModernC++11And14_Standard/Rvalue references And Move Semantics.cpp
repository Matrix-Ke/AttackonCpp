//通过查看汇编命令来识别左值和右值的区别。
//左值是可以在内存中取址的，右值是立即数或者寄存器内的值
#include "ClassTest.h"

int fn2(int a, int b, int c, int d, int e, int f, int g, int h)
{
	a++;
	int a1 = 55;
	int b1 = 1111;
	int c1 = 100;
	return 1;
}

int fn1(int a)
{
	a++;
	return 1;
}



int main()
{
	//int num = 99;
	//int i = fn2(num, 1, 2, 3, 4, 5, 6, 7);
	////int i = fn1(num, 1, 2, 3, 4, 5, 6, 7);


	return 0;
}

// move semantics 本质上就是交出自己对内存的控制权限
