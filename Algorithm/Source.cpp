struct ListNode
{
	int val;
	struct ListNode* next = nullptr;
	ListNode(int value, ListNode* ptr)
	{
		val = value;
		next = ptr;
	}
};



struct ListNode* deleteDuplicates(struct ListNode* head) {
	// write code here
	struct ListNode* curPtr = head;
	struct ListNode* nextPtr = head;
	while (nextPtr && nextPtr->next)
	{
		nextPtr = nextPtr->next;
		while (nextPtr && nextPtr->val == curPtr->val)
		{
			nextPtr = nextPtr->next;

		}

		curPtr->next = nextPtr;
		curPtr = nextPtr;
	}
	return head;
}

int main()
{
	ListNode* one = new ListNode(1, nullptr);
	ListNode* two = new ListNode(1, one);
	deleteDuplicates(two);

	return 0;
}