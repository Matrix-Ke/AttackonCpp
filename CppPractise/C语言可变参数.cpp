////�ο����ͣ� https://www.cnblogs.com/clover-toeic/p/3736748.html
//#include <iostream>
//#include<iomanip>
//#include <stdio.h>
//#include <stdarg.h>
//
//void VarArgFunc(int dwFixedArg, ...)
//{ //�Թ̶������ĵ�ַΪ�������ȷ������ε��ڴ���ʼ��ַ
//
//	va_list pArgs = NULL;  //����va_list���͵�ָ��pArgs�����ڴ洢������ַ
//
//	va_start(pArgs, dwFixedArg); //��ʼ��pArgsָ�룬ʹ��ָ���һ���ɱ�������ú�ڶ��������Ǳ���б��ǰһ�������������һ���̶�����
//
//	int ArgOne = va_arg(pArgs, int); //�ú귵�ر���б��еĵ�ǰ���ֵ��ʹpArgsָ���б��е��¸���Ρ��ú�ڶ���������Ҫ���صĵ�ǰ�������
//	std::cout << ArgOne << std::endl;
//	//va_end(pArgs);  //��ָ��pArgs��Ϊ��Ч��������εĻ�ȡ
//	//�������ж���ɱ�����������ε���va_arg���ȡ�������
//	/* Code Block using variable arguments */
//	int ArgTwo = va_arg(pArgs, int);
//	std::cout << ArgTwo << std::endl;
//}
//
//void VarArgFunc2(int dwFixedArg, ...)
//{
//	//��ȡ�ڶ����������׵�ַ, ��64λ�£� �������ڴ��������⣿ 
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
//	/* Ϊ num ��������ʼ�� valist */
//	va_start(valist, num);
//
//	/* �������и��� valist �Ĳ��� */
//	for (i = 0; i < num; i++)
//	{
//		sum += va_arg(valist, int);
//	}
//	/* ����Ϊ valist �������ڴ� */
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