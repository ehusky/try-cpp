#include "leetcode.h"

int main() {
	int InputIt = 321;
	int OutputIt;
	Solution *solu;
	solu = new Solution();
	OutputIt = solu->reverse(InputIt);
	cout << solu->reverse(-1534236469) << endl;
	cout << solu->reverse(-123) << endl;
	cout << solu->reverse(120) << endl;
	cout << solu->reverse(-pow(2, 31)) << endl;
	return 0;
}