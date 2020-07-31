#include"leetcode.h"

vector<int> Solution::runningSum(vector<int>& nums)
{
	vector<int> reVal;
	reVal.push_back(nums[0]);
	vector<int>::iterator iter = nums.begin();
	iter++;
	for (; iter != nums.end(); iter++)
	{
		reVal.push_back(*iter + reVal.back());
	}
	return reVal;
}