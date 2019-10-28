#include"leetcode.h"

int Solution::balancedStringSplit(string s) {
	int numBalancedStr = 0;
	int flag = 0;
	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] == 'L')
		{
			flag = flag - 1;
		}
		else
		{
			flag = flag + 1;
		}
		if (flag == 0)
		{
			numBalancedStr++;
		}
	}
	return numBalancedStr;
}