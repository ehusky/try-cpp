#include "leetcode.h"

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode* res_head = new ListNode(0);
	if (res_head == NULL)
	{
		return 0;
	}
	ListNode* res_tail = res_head;
	int carry = 0;
	int base;
	for (; l1 != NULL || l2 != NULL;)
	{
		if (l1 != NULL && l2 != NULL)
		{
			base = (l1->val + l2->val + carry) % 10;
			carry = (l1->val + l2->val + carry - base) / 10;
			ListNode* node = new ListNode(base);
			res_tail->next = node;
			res_tail = node;
			l1 = l1->next;
			l2 = l2->next;
		}
		else
		{
			if (l1 != NULL)
			{
				base = (l1->val + carry) % 10;
				carry = (l1->val + carry - base) / 10;
				ListNode* node = new ListNode(base);
				res_tail->next = node;
				res_tail = node;
				l1 = l1->next;
			}
			else
			{
				base = (l2->val + carry) % 10;
				carry = (l2->val + carry - base) / 10;
				ListNode* node = new ListNode(base);
				res_tail->next = node;
				res_tail = node;
				l2 = l2->next;
			}
		}
	}
	if (carry != 0)
	{
		ListNode* node = new ListNode(carry); 
		res_tail->next = node;
	}
	return res_head->next;
}