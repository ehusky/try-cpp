#include "leetcode.h"

int Solution::busyStudent(std::vector<int>& startTime, std::vector<int>& endTime, int queryTime)
{
	int num_students = 0;
	for (std::vector<int>::iterator iter_i = startTime.begin(), iter_j = endTime.begin(); iter_i != startTime.end(); iter_i++, iter_j ++)
	{
		if (*iter_i <= queryTime && *iter_j >= queryTime)
		{
			num_students++;
		}
	}
	return num_students;
}