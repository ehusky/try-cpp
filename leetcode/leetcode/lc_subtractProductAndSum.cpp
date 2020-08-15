#include "leetcode.h"

int Solution::subtractProductAndSum(int n)
{
	int digit_sum = 0;
	int digit_product = 1;
	int digit;
	while (n != 0)
	{
		digit = n % 10;
		n = n / 10;
		digit_sum = digit_sum + digit;
		digit_product = digit_product * digit;
	}
	return digit_product - digit_sum;
}