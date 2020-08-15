#include"leetcode.h"

int Solution::numIdenticalPairs(std::vector<int>& nums)
{
	int count;
	int total_count = 0;
	int good_pairs = 0;
	std::set<int> nums_set(nums.begin(), nums.end());
	for (std::set<int>::iterator iter = nums_set.begin(); iter != nums_set.end(); iter++)
	{
		
		count = std::count(nums.begin(), nums.end(), *iter);
		good_pairs = good_pairs + count * (count - 1) / 2;
		total_count = total_count + count;
	}
	return good_pairs;
}