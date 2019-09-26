#include "leetcode.h"

int Solution::numJewelsInStones(string J, string S) {
	int res = 0;
	char jew;
	for (int i = 0; i < J.length(); i++)
	{
		jew = J[i];
		for (int j = 0; j < S.length(); j++)
		{
			if (jew == S[j])
			{
				res++;
			}
		}
	}
	return res;
}