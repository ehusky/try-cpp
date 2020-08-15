#include "leetcode.h"

int Solution::maximum69Number(int num)
{
	int re_val = 0;
	int flag = 1;
	std::stack<int> digits;
	while (num != 0)
	{
		digits.push(num % 10);
		num /= 10;
	}
	while (!digits.empty())
	{
		if (flag)
		{
			if (digits.top() == 6)
			{
				re_val = 10 * re_val + 9;
				flag = 0;
				digits.pop();
				continue;
			}
		}
		re_val = 10 * re_val + digits.top();
		digits.pop();
	}
	return re_val;
}