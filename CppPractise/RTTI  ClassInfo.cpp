//默认已经关闭RTTI，  "/GR-" 
#include <typeinfo>
#include "ClassTest.h"

class TestStruct
{
public:
	int mName;

};


void testFunction(BaseClass* basePtr)
{
	if (basePtr)
	{
		ChildClassTwo* childPtr = dynamic_cast<ChildClassTwo*>(basePtr);
	}
}

int main()
{
	TestStruct  myStruct;
	BaseClass* basePtr = new ChildClassTwo();
	//ChildClassTwo* childPtr = dynamic_cast<ChildClassTwo*>(basePtr);
	//ChildClassTwo* childPtr = dynamic_cast<ChildClassTwo*>(basePtr);
	//childPtr->PrintInfo();


	std::cout << typeid(int).name() << std::endl;
	std::cout << typeid(*basePtr).name() << std::endl;
	//std::cout << typeid(*childPtr).name() << std::endl;
	//std::cout << typeid(childPtr).name() << std::endl;
	std::cout << typeid(myStruct).name() << std::endl;

	//const std::type_info& info = typeid(childPtr);

	//std::cout << info.hash_code() << std::endl;

	return 0;
}