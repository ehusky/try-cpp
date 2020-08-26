#include "primer.h"

int PRIMER::fib(int n)
{
	std::vector<int> fib;
	fib.push_back(1);
	fib.push_back(2);
	for (int i = 3; i != n; i++)
	{
		fib.push_back(fib.at(i - 1) + fib.at(i - 2));
	}
	return fib.at(n);
}