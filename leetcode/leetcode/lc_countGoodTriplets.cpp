#include "leetcode.h"

int Solution::countGoodTriplets(std::vector<int>& arr, int a, int b, int c)
{
	int good_triplets = 0;
	for (std::vector<int>::iterator iter_i = arr.begin(); iter_i != arr.end() - 2; iter_i++)
	{
		for (std::vector<int>::iterator iter_j = iter_i + 1; iter_j != arr.end() - 1; iter_j++)
		{
			if (std::abs(*iter_i - *iter_j) > a)
			{
				continue;
			}
			for (std::vector<int>::iterator iter_k = iter_j + 1; iter_k != arr.end(); iter_k++)
				{
					if (std::abs(*iter_j - *iter_k) <= b && std::abs(*iter_i - *iter_k) <= c)
					{
						good_triplets++;
					}
				}
		}
	}
	return good_triplets;
}