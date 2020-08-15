#include "leetcode.h"

std::string Solution::defangIPaddr(std::string address) {
	int addr;
	std::stack<int> addrs;
	addr = address.find('.');
	addrs.push(addr);
	addr = address.find('.', addr + 1);
	addrs.push(addr);
	addr = address.find('.', addr + 1);
	addrs.push(addr);
	while (!addrs.empty())
	{
		address.replace(addrs.top(), 1, "[.]");
		addrs.pop();
	}
	return address;
}