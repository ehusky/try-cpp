#include "leetcode.h"

int Solution::xorOperation(int n, int start)
{
	int pre_num = start;
	int num;
	int bit_xor = 0 ^ pre_num;
	for (int i = 1; i < n; i++)
	{
		num = start + 2 * i;
		bit_xor = bit_xor ^ num;
	}
	return bit_xor;
}