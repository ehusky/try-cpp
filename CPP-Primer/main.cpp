#include "primer.h"

int main()
{
	std::cout << "Hello World!\n";
	std::vector<int> inputVec = { 0,1,2,2,3 };
	PRIMER* CPP = new PRIMER();
	//std::cout << CPP->duplicate(inputVec) << std::endl;
	//int dataArr[3] = { 1,23,3 };
	//std::cout << dataArr << std::endl;
	//std::cout << dataArr[0] << std::endl;
	//std::cout << &dataArr[1] << std::endl;
	//std::cout << dataArr[1] << std::endl;
	//char str1[] = "hello world";
	//char str2[] = "hello world";
	//const char* str3 = "hello world";
	//const char* str4 = "hello world";
	//MYTEMPLATE<int> my_template;
	//my_template.multi(1, 2);
	//my_template.max(1, 2);
	CPP->mtc1();

	return 0;
}

