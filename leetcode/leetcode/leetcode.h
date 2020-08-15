#pragma once

#include <iostream>
#include <vector>
#include <stack>
#include <set>
#include <string>
#include <algorithm>
#include <map>  

	// Definition for singly-linked list.
	struct ListNode {
		int val;
		ListNode* next;
		ListNode() : val(0), next(nullptr) {}
		ListNode(int x) : val(x), next(nullptr) {}
		ListNode(int x, ListNode* next) : val(x), next(next) {}
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
private:
public:
	Solution() {};
	~Solution() {};
	std::vector<int> twoSum(std::vector<int>& nums, int target);
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
	int reverse(int x);
	std::string defangIPaddr(std::string address);
	int numJewelsInStones(std::string J, std::string S);
	int rangeSumBST(TreeNode* root, int L, int R);
	std::string toLowerCase(std::string str);
	bool isOneBitCharacter(std::vector<int>& bits);
	int uniqueMorseRepresentations(std::vector<std::string>& words);
	int balancedStringSplit(std::string s);
	std::string removeOuterParentheses(std::string S);
	std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& A);
	std::vector<int> sortArrayByParity(std::vector<int>& A);
	int numOfSteps(int num);
	std::vector<int> decompressRLElist(std::vector<int>& nums);
	std::vector<int> runningSum(std::vector<int>& nums);
	std::string arrangeWords(std::string text);
	std::vector<int> shuffle(std::vector<int>& nums, int n);
	std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies);
	int numIdenticalPairs(std::vector<int>& nums);
	std::string restoreString(std::string s, std::vector<int>& indices);
	int xorOperation(int n, int start);
	int subtractProductAndSum(int n);
	std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums);
	int findNumbers(std::vector<int>& nums);
	int getDecimalValue(ListNode* head);
	int minTimeToVisitAllPoints(std::vector<std::vector<int>>& points);
	int countGoodTriplets(std::vector<int>& arr, int a, int b, int c);
	int oddCells(int n, int m, std::vector<std::vector<int>>& indices);
	int busyStudent(std::vector<int>& startTime, std::vector<int>& endTime, int queryTime);
	int maxProduct(std::vector<int>& nums);
	int maximum69Number(int num);
	bool checkPossibility(std::vector<int>& nums);
	bool buddyStrings(std::string A, std::string B);
	std::string convertToTitle(int n);
};