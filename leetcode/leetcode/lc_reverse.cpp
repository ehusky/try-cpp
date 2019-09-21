#include "leetcode.h"

int Solution::reverse(int x) {
	int res = 0;
	int flag = 0;
	if (x == INT32_MIN)
	// ignore -2^31
	{
		return 0;
	}
	//check negative
	bool is_negative = (x < 0);
	x = abs(x);
	int base;
	for (; x != 0; x = ceil(x / 10))
	{
		base = x % 10;
		if (res > INT32_MAX / 10)
		// ignore overflowed reversed value
		{
			return 0;
		}
		res = res * 10 + base;
	}
	return is_negative ? -res : res;
}