#include "leetcode.h"

bool Solution::isOneBitCharacter(vector<int>& bits) {
	bool isOneBit = 0;
	for (size_t i = 0; i < bits.size(); i++)
	{
		if (bits[i] == 1)
		{
			i = i + 1;
			isOneBit = 0;
		}
		else
		{
			isOneBit = 1;
		}
	}
	return isOneBit;
}