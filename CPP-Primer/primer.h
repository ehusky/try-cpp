#pragma once

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm> 
#include <numeric>
#include <set>
class PRIMER
{
public:
	PRIMER()
	{
		std::cout << "PRIMER::Constructor!" << std::endl;
	}
	~PRIMER()
	{
		std::cout << "PRIMER::Destructor!" << std::endl;
	}
	bool duplicate(std::vector<int> nums);
	int fib(int n);
	int yerd();
	int blocks();
	int mt2();
	int mt1();
	int mt4();
	int mtc1();
	void experiment();
private:

};

template <typename T> class MYTEMPLATE {
private:

public:
	T multi(T a, T b){
		return a * b;
	}
	T max(T a, T b) {
		return a > b ? a : b;
	}
};