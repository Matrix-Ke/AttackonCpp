//作者：Felix Qiu
//链接：https ://www.zhihu.com/question/46470823/answer/101481571
//来源：知乎
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
#include <cstdio>

struct A
{
	virtual void a()
	{
		printf("A\n");
	}
};

struct B
{
	virtual void b()
	{
		printf("B\n");
	}
};

struct C : A, B
{

};

int main()
{
	C c;
	B* scast = static_cast<B*>(&c);
	B* rcast = reinterpret_cast<B*>(&c);

	printf("%p, %p\n", scast, rcast);

	scast->b();
	rcast->b(); // oops

	C* scast_back = static_cast<C*>(scast);
	C* rcast_back = reinterpret_cast<C*>(scast);
	printf("%p, %p\n", scast_back, rcast_back);

	scast_back->a();
	rcast_back->a(); // oops
	return 0;
}

