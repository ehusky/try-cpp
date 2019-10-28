#include"leetcode.h"

vector<vector<int>> Solution::flipAndInvertImage(vector<vector<int>>& A)
{
	for (vector<vector<int>>::iterator iter = A.begin(); iter != A.end(); iter++)
	{
		std::reverse(iter->begin(), iter->end());
		for (vector<int>::iterator iiter = iter->begin(); iiter < iter->end(); iiter++)
		{
			*iiter = 1 - *iiter;
		}
	}
	return A;
}