#include "leetcode.h"

int Solution::maxProduct(std::vector<int>& nums)
{
	int product;
	std::sort(nums.begin(), nums.end());
	product = (nums.back() - 1) * (nums[nums.size()-1] - 1);
	return product;
}