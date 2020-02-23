#include "leetcode.h"
vector<int> Solution::decompressRLElist(vector<int>& nums) {
	vector<int> reList;
	for (int i = 0; i < nums.size() / 2; i++) {
		for (int j = 0; j < nums[2 * i + 1]; j++)
			reList.push_back(pow(2, nums[2 * i]));
	}
	return reList;
}