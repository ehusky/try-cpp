#pragma once

#include <iostream>
#include <vector>
#include <stack>
#include <set>
#include <string>
#include <algorithm>
#include <map>  

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
	int uniqueMorseRepresentations(vector<string>& words);
	int balancedStringSplit(string s);
	string removeOuterParentheses(string S);
	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A);
	vector<int> sortArrayByParity(vector<int>& A);
	int numOfSteps(int num);
	vector<int> decompressRLElist(vector<int>& nums);
	vector<int> runningSum(vector<int>& nums);
	string arrangeWords(string text);
private:
};