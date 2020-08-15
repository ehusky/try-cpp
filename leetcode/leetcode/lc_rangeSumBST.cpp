#include "leetcode.h"

int Solution::rangeSumBST(TreeNode* root, int L, int R) {
	std::deque<TreeNode*> nodes;
	TreeNode* node;
	int node_val;
	int res = 0;
	if (root == NULL)
	{
		return 0;
	}
	nodes.push_back(root);
	while (!nodes.empty())
	{
		node = nodes.front();
		node_val = node->val;
		if (node_val >= L && node_val <= R)
		{
			res = res + node_val;
		}
		nodes.pop_front();
		if (node->left != NULL)
		{
			nodes.push_back(node->left);
		}
		if (node->right != NULL)
		{
			nodes.push_back(node->right);
		}
	}
	return res;
}