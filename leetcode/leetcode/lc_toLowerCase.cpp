#include "leetcode.h"

std::string Solution::toLowerCase(std::string str) {
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	return str;
}