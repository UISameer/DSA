// https://leetcode.com/explore/featured/card/recursion-i/251/scenario-i-recurrence-relation/2378/

#include<bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
	ListNode* reverseList(ListNode* head) {

		ListNode* current = head;
		ListNode* prev = NULL, *next = NULL;

		while (current != NULL) {
			// Store next
			next = current -> next;
			// Reverse current node's pointer
			current -> next = prev;
			// Move pointers one position ahead.
			prev = current;
			current = next;
		}
		head = prev;
		return head;
	}

	// Recursive
	ListNode* reverseList2(ListNode* head) {

		if (head == NULL || head -> next == NULL) {
			return head;
		};

		ListNode *p = reverseList(head -> next);
		head -> next -> next = head;
		head -> next = NULL;
		return p;
	}
};

int main() {
	return 0;
}