# include "hdoj.h"

int Solution::hdoj_1001_sum(int InputIt) {
	if (InputIt == 1) {
		return 1;
	}
	else {
		return InputIt + hdoj_1001_sum(InputIt - 1);
	}
}

int Solution::hdoj_1001() {
	int n;
	while (cin >> n) {
		cout << hdoj_1001_sum(n) << endl << endl;
	}
	return 0;
}