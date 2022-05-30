////explicit for ctors taking more than one argument
//
//struct Complex
//{
//	int real, imag;
//	//explicit //这个会禁止编译器进行自动转化，必须要明确转化才会调用
//	Complex(int re, int im = 0) :real(re), imag(im)
//	{
//	}
//
//	//强制加上=default， 编译器会自动给你生成一个默认构造函数
//	Complex() = default;
//	Complex(const Complex&) = default;
//	Complex& operator = (const Complex&) = default;
//
//	Complex(Complex&&) = default;
//	Complex& operator =(const Complex&&) = delete;
//
//
//	Complex operator+ (const Complex& rhs)
//	{
//		return Complex((real + rhs.real), (imag + rhs.imag));
//	}
//};
//
//
//
//int main()
//{
//	Complex c1(12, 5);
//
//	Complex  c2 = c1 + 5; //编译器会进行隐喻式转换
//
//
//	return  0;
//}