#include "leetcode.h"
int Solution::numOfSteps(int num) {
	int steps = 0;
	while (num != 0)
	{
		if (num % 2 == 0)
		{
			num = num / 2;
		}
		else
		{
			num = num - 1;
		}
		steps++;
	}
	return steps;
}