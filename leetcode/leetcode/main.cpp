#include "leetcode.h"

int main() {
	vector<int> InputIt;
	InputIt.push_back(1);
	InputIt.push_back(1);
	InputIt.push_back(1);
	InputIt.push_back(0);
	bool OutputBo;
	Solution *solu;
	solu = new Solution();
	OutputBo = solu->isOneBitCharacter(InputIt);
	cout << OutputBo << endl;
	return 0;
}