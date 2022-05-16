#include "ClassTest.h"


////错误使用 是因为C++强制规定，重载赋值运算符函数，只能是类的非静态的成员函数。
//BaseClass& operator = (const BaseClass a, const int b)
//{
//	return
//}