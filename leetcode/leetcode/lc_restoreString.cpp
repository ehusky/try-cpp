#include"leetcode.h"

std::string Solution::restoreString(std::string s, std::vector<int>& indices)
{
	std::string reString = s;
	int i = 0;
	for (std::vector<int>::iterator iter = indices.begin(); iter != indices.end(); iter++, i ++)
	{
		reString[*iter] = s[i];
	}
	return reString;
}