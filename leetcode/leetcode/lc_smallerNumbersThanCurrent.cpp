#include "leetcode.h"

std::vector<int> Solution::smallerNumbersThanCurrent(std::vector<int>& nums)
{
	std::vector<int> sm_nums (nums.size(), 0);
	int i = 0;
	int j;
	for (std::vector<int>::iterator iter = nums.begin(); iter != nums.end(); iter ++, i ++)
	{
		j = i + 1;
		for (std::vector<int>::iterator back_iter = iter + 1; back_iter != nums.end(); back_iter++, j ++)
		{
			if (*iter < *back_iter)
			{
				sm_nums[j] += 1;
			}
			else
			{
				if (*iter > *back_iter)
				{
					sm_nums[i] += 1;
				}
			}
		}
	}
	return sm_nums;
}