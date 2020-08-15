#include"leetcode.h"

std::string Solution::removeOuterParentheses(std::string S) {
	std::string reStr;
	char x;
	int flag = -1;
	for (size_t i = 1; i < S.size(); i++)
	{
		x = S[i];
		if (x == '(')
		{
			flag--;
			reStr += S[i];
		}
		else
		{
			flag++;
			reStr += S[i];
		}
		if (flag == 0)
		{
			reStr.pop_back();
			i++;
			flag = -1;
		}
	}
	return reStr;
}