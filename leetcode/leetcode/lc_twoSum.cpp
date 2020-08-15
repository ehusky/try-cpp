#include "leetcode.h"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target)
{
	int loc1 = 0;
	std::vector<int> res;
	for (std::vector<int>::iterator iter = nums.begin(); iter != nums.end(); ++iter)
	{
		auto loc2 = find(nums.begin(), nums.end(), target - *iter);
		if (loc2 != nums.end() && loc2 != iter)
		{
			res.push_back(loc1);
			res.push_back(loc2 - nums.begin());
			break;
		}
		loc1++;
	}
	return res;
}