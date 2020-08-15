#include "leetcode.h"

std::string Solution::convertToTitle(int n)
{
	std::string re_string;
	char tmp;
	while (n != 0)
	{
		tmp = char((n-1) % 26 + 64);
		re_string.insert(re_string.begin(),tmp);
		n = (n - 1) / 26;
	}
	return re_string;
}