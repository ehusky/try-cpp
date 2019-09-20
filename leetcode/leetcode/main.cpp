#include "leetcode.h"

int main() {
	ListNode* InputLn1 = new ListNode(2);
	ListNode node0(4);
	ListNode node1(3);
	ListNode node2(6);
	ListNode node3(4);
	ListNode node4(9);
	ListNode node5(9);
	node1.next = &node5;
	node0.next = &node1;
	InputLn1->next = &node0;
	ListNode* InputLn2 = new ListNode(5);
	node4.next = &node5;
	node3.next = &node4;
	node2.next = &node3;
	InputLn2->next = &node2;
	Solution *solu;
	solu = new Solution();
	ListNode* OutputLn3;
	OutputLn3 = solu->addTwoNumbers(InputLn1, InputLn2);
	return 0;
}