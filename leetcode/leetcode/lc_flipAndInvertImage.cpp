#include"leetcode.h"

std::vector<std::vector<int>> Solution::flipAndInvertImage(std::vector<std::vector<int>>& A)
{
	for (std::vector<std::vector<int>>::iterator iter = A.begin(); iter != A.end(); iter++)
	{
		std::reverse(iter->begin(), iter->end());
		for (std::vector<int>::iterator iiter = iter->begin(); iiter < iter->end(); iiter++)
		{
			*iiter = 1 - *iiter;
		}
	}
	return A;
}