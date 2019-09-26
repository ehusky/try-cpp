#include "leetcode.h"

string Solution::defangIPaddr(string address) {
	int addr;
	stack<int> addrs;
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