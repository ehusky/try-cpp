#pragma once

#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};


// Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution
{
public:
	Solution() {};
	~Solution() {};
	vector<int> twoSum(vector<int>& nums, int target);
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
	int reverse(int x);
	string defangIPaddr(string address);
	int numJewelsInStones(string J, string S);
	int rangeSumBST(TreeNode* root, int L, int R);
	string toLowerCase(string str);
	bool isOneBitCharacter(vector<int>& bits);
private:
};