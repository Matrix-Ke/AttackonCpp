////explicit for ctors taking more than one argument
//
//struct Complex
//{
//	int real, imag;
//	//explicit //������ֹ�����������Զ�ת��������Ҫ��ȷת���Ż����
//	Complex(int re, int im = 0) :real(re), imag(im)
//	{
//	}
//
//	//ǿ�Ƽ���=default�� ���������Զ���������һ��Ĭ�Ϲ��캯��
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
//	Complex  c2 = c1 + 5; //���������������ʽת��
//
//
//	return  0;
//}