////参考博客： https://www.cnblogs.com/clover-toeic/p/3736748.html
//#include <iostream>
//#include<iomanip>
//#include <stdio.h>
//#include <stdarg.h>
//
//void VarArgFunc(int dwFixedArg, ...)
//{ //以固定参数的地址为起点依次确定各变参的内存起始地址
//
//	va_list pArgs = NULL;  //定义va_list类型的指针pArgs，用于存储参数地址
//
//	va_start(pArgs, dwFixedArg); //初始化pArgs指针，使其指向第一个可变参数。该宏第二个参数是变参列表的前一个参数，即最后一个固定参数
//
//	int ArgOne = va_arg(pArgs, int); //该宏返回变参列表中的当前变参值并使pArgs指向列表中的下个变参。该宏第二个参数是要返回的当前变参类型
//	std::cout << ArgOne << std::endl;
//	//va_end(pArgs);  //将指针pArgs置为无效，结束变参的获取
//	//若函数有多个可变参数，则依次调用va_arg宏获取各个变参
//	/* Code Block using variable arguments */
//	int ArgTwo = va_arg(pArgs, int);
//	std::cout << ArgTwo << std::endl;
//}
//
//void VarArgFunc2(int dwFixedArg, ...)
//{
//	//获取第二个参数的首地址, 在64位下， 还存在内存对齐的问题？ 
//	char* variadicAddr = (char*)(&dwFixedArg) + sizeof(dwFixedArg);
//	//std::cout << unsigned long long(&dwFixedArg) << std::endl;
//
//
//	va_start(variadicAddr, dwFixedArg);
//	int ArgOne = va_arg(variadicAddr, int);
//	//int ArgOne = *((int*)variadicAddr);
//	std::cout << std::setbase(16) << ArgOne << std::endl;
//
//	//int ArgTwo = int(*(int*)((char*)variadicAddr + sizeof(int)));
//	//std::cout << ArgTwo << std::endl;
//}
//
//
//
//double average(int num, ...)
//{
//
//	va_list valist;
//	double sum = 0.0;
//	int i;
//
//	/* 为 num 个参数初始化 valist */
//	va_start(valist, num);
//
//	/* 访问所有赋给 valist 的参数 */
//	for (i = 0; i < num; i++)
//	{
//		sum += va_arg(valist, int);
//	}
//	/* 清理为 valist 保留的内存 */
//	va_end(valist);
//
//	return sum / num;
//}
//
//int main()
//{
//	//printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
//	//printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));
//
//	//VarArgFunc(100, 88, 66);
//	VarArgFunc2(0x66666666, 0x11111111, 0x55555555);
//}