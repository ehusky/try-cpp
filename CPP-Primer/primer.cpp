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

int PRIMER::yerd()
{
	std::string history, observation;
	while (std::cin >> history >> observation) {

		int denominator = history.size();
		int numerator = 0;
		for (int i = 0; i < denominator; i++) {
			if ((history.at(i) >= 48 && history.at(i) <= 57) || (history.at(i) >= 65 && history.at(i) <= 90) || (history.at(i) >= 97 && history.at(i) <= 122))
			{
				if (observation.at(i) == '1')
				{
					numerator++;
				}
			}
			else
			{
				if (observation.at(i) == '0')
				{
					numerator++;
				}
			}
		}
		std::cout << std::fixed << std::setprecision(2) << float(numerator) / float(denominator) << '%' << std::endl;
	}
	return 0;
}
int PRIMER::blocks()
{
	struct myclass {
		bool operator() (int i, int j) { return i < j; }
	} myobj;
	int blockSize, operations, block, operation, start, end;
	while (std::cin >> blockSize >> operations)
	{
		std::vector<int> BLOCK;
		for (size_t i = 0; i < blockSize; i++)
		{
			std::cin >> block;
			BLOCK.push_back(block);
		}
		for (size_t i = 0; i < blockSize; i++)
		{
			std::cin >> operation >> start >> end;
			std::vector<int>::iterator startIter= BLOCK.begin() + start - 1;
			std::vector<int>::iterator endIter = BLOCK.begin() + end;
			if (operation == 2)
			{
				std::cout << std::accumulate(startIter, endIter, 0) << std::endl;
			}
			else {
				if (operation == 3)
				{
					std::cout << *std::max_element(startIter, endIter, myobj) << std::endl;
				}
			}
		}
	}
	return 0;
}