#include "leetcode.h"

string Solution::toLowerCase(string str) {
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	return str;
}