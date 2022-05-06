#include <iostream>
class Array
{
public:
	Array()
	{
		data = nullptr;
		size = 666;
		name = 111;
	}
	int* data;
	int size;
	int name;
};

struct ListNode
{
	//...
	ListNode(int _val, ListNode* _next = nullptr)
	{
		this->val = _val;
		this->next = _next;
	}
	int val;
	ListNode* next;
};

struct List
{
	List(int _size, ListNode* _head = nullptr)
	{
		this->size = _size;
		this->head = _head;
	}
	ListNode* head;
	int size;
};



int main()
{
	//Array  arr[5];
	//std::cout << arr[0].size << std::endl;
	ListNode  one(1);
	ListNode  two(3);
	ListNode  three(5);

	one.next = &two;
	two.next = &three;
	List   listTest(3, &one);

	std::cout << listTest.size << std::endl;
	return 0;
}

