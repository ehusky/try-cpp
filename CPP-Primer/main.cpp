// main.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include "primer.h"

int main()
{
	std::cout << "Hello World!\n";
	std::vector<int> inputVec = { 0,1,2,2,3 };
	PRIMER* CPP = new PRIMER();
	std::cout << CPP->duplicate(inputVec) << std::endl;
	int dataArr[3] = { 1,23,3 };
	std::cout << dataArr << std::endl;
	std::cout << dataArr[0] << std::endl;
	std::cout << &dataArr[1] << std::endl;
	std::cout << dataArr[1] << std::endl;
	char str1[] = "hello world";
	char str2[] = "hello world";
	const char* str3 = "hello world";
	const char* str4 = "hello world";
	MYTEMPLATE<int> my_template;
	my_template.multi(1, 2);
	my_template.max(1, 2);
	return 0;
}

// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�

// ����ʹ�ü���: 
//   1. ʹ�ý��������Դ�������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б��ڲ鿴����
//   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�
