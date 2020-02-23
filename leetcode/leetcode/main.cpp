#include "leetcode.h"

int main() {
	vector<int> A = {1, 2, 3, 4};
	Solution *solu;
	solu = new Solution();
	vector<int> OutputBo;
	OutputBo = solu->decompressRLElist(A);
	//cout << OutputBo << endl;
	return 0;
}