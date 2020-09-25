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

int PRIMER::mt2()
{
	std::set<int> res;
	int numPeoples;
	std::pair<std::set<int>::iterator, bool> retpair;
	while (std::cin >> numPeoples) {
		int jobs[5][5];
		for (int i = 0; i < numPeoples; i++) {
			for (int j = 0; j < numPeoples; j++) {
				std::cin >> jobs[i][j];
			}
		}
		for (int i = 0; i < numPeoples; i++) {
			for (int j = 0; j < numPeoples; j++) {
				retpair = res.insert(jobs[i][j]);
				if (retpair.second) {
					std::cout << jobs[i][j] << ' ';
					break;
				}
			}
		}
	}
	return 0;
}

int PRIMER::mt1() {
	std::string T;
	int length;
	while (std::cin >> length >> T) {
		//find pre
		bool flagM = false;
		bool flagT = false;
		int preLoc = 0;
		for (int i = 0; i < length; i++) {
			if (!flagM) {
				//find M
				if (T[i] == 'M') {
					flagM = true;
				}
			}
			else {
				//find T
				if (T[i] == 'T') {
					flagT = true;
					preLoc = i + 1;
					break;
				}
			}
		}
		if (flagM && flagT) {
			flagM = false;
			flagT = false;
			int tailLoc = 0;
			for (int i = length - 1; i > -1; i--) {
				if (!flagT) {
					//find T
					if (T[i] == 'T') {
						flagT = true;
					}
				}
				else {
					//find M
					if (T[i] == 'M') {
						flagM = true;
						tailLoc = i;
						break;
					}
				}
			}
			if (flagM && flagT) {
				for (int j = preLoc; j < tailLoc; j++) {
					std::cout << T[j];
				}
			}
			else {
				std::cout << std::endl;
			}
		}
		else {
			std::cout << std::endl;
		}
	}
	return 0;
}

int PRIMER::mtc1()
{
	int length;
	std::vector<int> A;
	std::vector<int> B;
	int num;
	int numOperations;
	int operation;
	while (std::cin >>length)
	{
		for (int i = 0; i < length; i++)
		{
			std::cin >> num;
			A.push_back(num);
			B.push_back(-1);
		}
		std::cin >> numOperations;
		for (int i = 0; i < numOperations; i++)
		{
			std::cin >> operation;
			if (operation == 2)
			{
				int locB;
				std::cin >> locB;
				locB -= 1;
				std::cout << B.at(locB) << std::endl;
			}
			else
			{
				if (operation == 1)
				{
					int subLength, locA, locB;
					std::cin >> subLength >> locA >> locB;
					locA -= 1;
					locB -= 1;
					for (int j = locA, k = locB; j < locA + subLength; j++, k++)
					{
						B[k] = A[j];
					}
				}
			}
		}
	}
	return 0;
}

int PRIMER::mt4()
{
	int MAX;
	int length;
	std::vector<int> NUM;
	int num;
	while (std::cin >> MAX >> length) {
		for (int i = 0; i < length; i++) {
			std::cin >> num;
			NUM.push_back(num);
		}	
	}
	return 0;
}

void PRIMER::experiment() {
	int n = 0x124;
	double d = 1234;
	std::cout.setf(std::ios::oct, std::ios::basefield);
	std::cout << n << "," << d << "," << 0x124 << "," << 1234 << std::endl;
	std::cout.setf(std::ios::showpoint);
	std::cout << d << "," << 1234 << std::endl;
	std::cout.unsetf(std::ios::showpoint);
	std::cout.unsetf(std::ios::oct);
	std::cout.setf(std::ios::oct, std::ios::basefield);  // set hex as the basefield
	std::cout << 100 << '\n';
}

void PRIMER::autoptr() {
	int a = 10;
	std::shared_ptr<int> ptra = std::make_shared<int>(a);
	std::shared_ptr<int> ptra2(ptra);
	std::cout << ptra.use_count() << std::endl;
	std::cout << ptra2.use_count() << std::endl;
	int b = 20;
	int* pb = &a;
	std::shared_ptr<int> ptrb = std::make_shared<int>(b);
	ptra2 = ptrb;
	pb = ptrb.get(); 
	std::cout << ptra2.use_count() << std::endl;
	std::cout << ptrb.use_count() << std::endl;
}