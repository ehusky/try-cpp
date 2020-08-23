#include "primer.h"

bool PRIMER::duplicate(std::vector<int> nums)
{
	int temp;
	for (int i = 0; i != nums.size();)
	{
		if (nums.at(i) == i)
		{
			i++;
			continue;
		}
		else {
			if (nums.at(i) == nums.at(nums.at(i)))
			{
				return false;
			}
			else {
				temp = nums.at(i);
				nums.at(i) = nums.at(nums.at(i));
				nums.at(nums.at(i)) = temp;
			}
		}
	}
	return true;
}