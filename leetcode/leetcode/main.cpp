#include "leetcode.h"

int main() {
	vector<int> A = {3,1,2,4};
	Solution *solu;
	solu = new Solution();
	vector<int> OutputBo = solu->sortArrayByParity(A);
	//cout << OutputBo << endl;
	return 0;
}