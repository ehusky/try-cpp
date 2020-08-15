#include "leetcode.h"

int Solution::minTimeToVisitAllPoints(std::vector<std::vector<int>>& points)
{
	int total_steps = 0;
	int previous_point[2];
	previous_point[0] = points[0][0];
	previous_point[1] = points[0][1];
	for (std::vector<std::vector<int>>::iterator iter = points.begin() + 1; iter != points.end(); iter++)
	{
		total_steps += std::max(std::abs(iter[0][0] - previous_point[0]), std::abs(iter[0][1] - previous_point[1]));
		previous_point[0] = iter[0][0];
		previous_point[1] = iter[0][1];
	}
	return total_steps;
}