#include"leetcode.h"

std::vector<int> Solution::sortArrayByParity(std::vector<int>& A) {
	std::deque<int> retQue;
	std::vector<int> retVec;
	for (std::vector<int>::iterator iter = A.begin(); iter != A.end(); iter++)
	{
		if (*iter % 2 == 0)
		{
			retQue.push_front(*iter);
		}
		else
		{
			retQue.push_back(*iter);
		}
	}
	for (std::deque<int>::iterator iter = retQue.begin(); iter != retQue.end(); iter++)
	{
		retVec.push_back(*iter);
	}
	return retVec;
}