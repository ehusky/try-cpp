#include "leetcode.h"

bool Solution::checkPossibility(std::vector<int>& nums)
{
	bool is_non_decreasing = true;
	if (nums.size() < 3)
	{
		return is_non_decreasing;
	}
	else
	{
		std::vector<int>::iterator iter = nums.begin() + 1;
		bool flag = 1;
		while (iter != nums.end() - 1)
		{
			if (*iter == *(iter - 1))
				//
			{
				if (*iter <= *(iter + 1))
				{
					iter++;
					continue;
				}
				else
				{
					if (!flag)
					{
						is_non_decreasing = false;
						break;
					}
					else
					{
						*(iter + 1) = *iter;
						flag = 0;
					}
				}
			}
			else
			{
				if (*iter == *(iter + 1))
				{
					if (*iter > * (iter - 1))
					{
						iter++;
						continue;
					}
					else
					{
						if (!flag)
						{
							is_non_decreasing = false;
							break;
						}
						else
						{
							*(iter - 1) = *iter;
							flag = 0;
						}
					}
				}
				else
				{
					if (*(iter - 1) > * (iter + 1))
						//must change
					{
						if (*iter > * (iter + 1) && *iter < *(iter - 1))
							//ok, fine.
						{
							is_non_decreasing = false;
							break;
						}
						else
						{
							if (!flag)
								//ok, fine.
							{
								is_non_decreasing = false;
								break;
							}
							else
								//change iter-1;
							{
								if (*iter < *(iter - 1))
								{
									*(iter - 1) = *iter;
									flag = 0;
								}
								else
								{
									*(iter + 1) = *iter;
									flag = 0;
								}

							}
						}
					}
					else
						//seems ok, check if need to change iter.
					{
						if (*iter > * (iter - 1) && *iter < *(iter + 1))
							//we are ok
						{
							iter++;
							continue;
						}
						else
							//something wrong
						{
							if (!flag)
								//ok, fine.
							{
								is_non_decreasing = false;
								break;
							}
							else
								//change iter.
							{
								*iter = *(iter - 1);
								flag = 0;
							}
						}
					}
				}
			}
			iter++;
		}

	}
	return is_non_decreasing;
}