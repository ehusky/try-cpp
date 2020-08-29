#pragma once

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm> 
#include <numeric>
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