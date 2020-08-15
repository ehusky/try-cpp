#include"leetcode.h"

bool sortFunction(int i, int j)
{
	return (i < j);
}

std::vector<bool> Solution::kidsWithCandies(std::vector<int>& candies, int extraCandies)
{
	std::vector<bool> bool_max_candies;
	int max_candies = *std::max_element(candies.begin(), candies.end(), sortFunction);
	for (std::vector<int>::iterator iter = candies.begin(); iter < candies.end(); iter++)
	{
		bool_max_candies.push_back(*iter + extraCandies >= max_candies);
	}
	return bool_max_candies;
}