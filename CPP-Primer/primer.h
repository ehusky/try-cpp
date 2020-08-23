#pragma once

#include <iostream>
#include <vector>

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
private:

};

