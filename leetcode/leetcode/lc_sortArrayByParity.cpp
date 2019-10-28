#include"leetcode.h"

vector<int> Solution::sortArrayByParity(vector<int>& A) {
	deque<int> retQue;
	vector<int> retVec;
	for (vector<int>::iterator iter = A.begin(); iter != A.end(); iter++)
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
	for (deque<int>::iterator iter = retQue.begin(); iter != retQue.end(); iter++)
	{
		retVec.push_back(*iter);
	}
	return retVec;
}