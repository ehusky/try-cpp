#include"leetcode.h"

std::vector<bool> Solution::kidsWithCandies(std::vector<int>& candies, int extraCandies)
{
	int max_candies = std::max(candies);
	std::vector<bool> bool_max_candies;
	for (std::vector<int>::iterator iter = candies.begin(); iter != candies.end(); ++iter) {
		bool_max_candies.push_back(*iter + extraCandies > max_candies);
	}
	return bool_max_candies;
}