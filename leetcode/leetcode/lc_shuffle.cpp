#include"leetcode.h"

std::vector<int> Solution::shuffle(std::vector<int>& nums, int n)
{
	std::vector<int> shuffled_array;
	for (int i = 0; i < n; i++)
	{
		shuffled_array.push_back(nums[i]);
		shuffled_array.push_back(nums[i + n]);
	}
	return shuffled_array;
}