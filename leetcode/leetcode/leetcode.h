#pragma once

#include <iostream>;
#include <vector>;

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
 

class Solution
{
public:
	Solution() {};
	~Solution() {};
	vector<int> twoSum(vector<int>& nums, int target);
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
	int reverse(int x);
private:
};