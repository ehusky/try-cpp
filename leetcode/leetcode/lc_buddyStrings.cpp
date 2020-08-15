#include "leetcode.h"

bool Solution::buddyStrings(std::string A, std::string B)
{
	std::set<char> chars;
	std::pair<std::set<char>::iterator, bool> ret;
	std::vector<int> num_diff_chars;
	bool duplicate = false;
	if (A.size() != B.size() || A.size() < 2)
	{
		return false;
	}
	else
	{
		for (int i = 0; i < A.size(); i++)
		{
			if (A[i] != B[i])
			{
				num_diff_chars.push_back(i);
			}
			ret = chars.insert(A[i]);
			if (!ret.second)
			{
				duplicate = true;
			}
		}
		if (num_diff_chars.empty())
		{
			if (A.size() > 26 || duplicate)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			if (num_diff_chars.size() != 2)
			{
				return false;
			}
			else
			{
				if (num_diff_chars.size() == 2)
				{
					if (A[num_diff_chars[0]] == B[num_diff_chars[1]] && A[num_diff_chars[1]] == B[num_diff_chars[0]])
					{
						return true;
					}
					else
					{
						return false;
					}
				}
			}
		}
	}
	return false;
}