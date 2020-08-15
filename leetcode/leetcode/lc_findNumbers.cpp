#include "leetcode.h"

int Solution::findNumbers(std::vector<int>& nums)
{
	int length;
	int even_nums = 0;
	for (std::vector<int>::iterator iter = nums.begin(); iter != nums.end(); iter++)
	{
		length = 0;
		while (*iter)
			{
				*iter /= 10;
				length ++;
			}
		if (length % 2 == 0)
		{
			even_nums += 1;
		}
	}
	return even_nums;
}