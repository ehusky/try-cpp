#include"leetcode.h"

std::vector<int> Solution::runningSum(std::vector<int>& nums)
{
	std::vector<int> reVal;
	reVal.push_back(nums[0]);
	std::vector<int>::iterator iter = nums.begin();
	iter++;
	for (; iter != nums.end(); iter++)
	{
		reVal.push_back(*iter + reVal.back());
	}
	return reVal;
}