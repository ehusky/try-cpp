#include "leetcode.h"

int Solution::getDecimalValue(ListNode* head)
{
	int decimal_value = 0;
	std::stack<int> digits;
	for (ListNode* i = head; i != NULL; i=i->next)
	{
		digits.push(i->val);
	}
	int i = 0;
	while (digits.size() != 0)
	{
		decimal_value += digits.top() * pow(2, i);
		digits.pop();
		i++;
	}
	return decimal_value;
}