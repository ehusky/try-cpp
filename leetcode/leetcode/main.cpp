#include "leetcode.h"

int main() {
	vector<int> InputIt, OutputIt;
	Solution *solu;
	solu = new Solution();
	InputIt.push_back(3);
	InputIt.push_back(2);
	InputIt.push_back(4);
	int target_num = 6;
	OutputIt = solu->twoSum(InputIt, target_num);
	return 0;
}