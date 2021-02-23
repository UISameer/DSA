#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void push(Node** headRef, int newData) {
	Node* newNode = new Node();
	newNode -> data = newData;
	newNode -> next = *headRef;
	*headRef = newNode;
}

void print(Node* node) {
	while (node != NULL) {
		cout << " " << node->data;
		node = node->next;
	}
}

// >> Iterative
// Time Complexity: O(n)
// Space Complexity: O(1)
Node* reverse(Node* head) {

	Node* current = head;
	Node* prev = NULL, *next = NULL;

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

// >> Recursive
// Time Complexity: O(n)
// Space Complexity: O(1)
Node* reverseRecursive(Node* head) {

	if (head == NULL || head -> next == NULL) {
		return head;
	}
	// reverse the rest list and put
	// the first element at the end
	Node* rest = reverseRecursive(head -> next);
	head -> next -> next = head;

	// tricky step
	head->next = NULL;

	// fix the head pointer
	return rest;
}

// >> A simple and tail-recursive function to reverse
// a linked list.  prev is passed as NULL initially.
// reverseUtil(*head, NULL, head);
void reverseUtil(Node* curr, Node* prev, Node** head)
{
	/* If last node mark it head*/
	if (!curr->next) {
		*head = curr;

		/* Update next to prev node */
		curr->next = prev;
		return;
	}

	/* Save curr->next node for recursive call */
	Node* next = curr->next;

	/* and update next ..*/
	curr->next = prev;

	reverseUtil(next, curr, head);
}

int main() {

	Node* head = NULL;

	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);
	push(&head, 5);

	print(head);

	cout << "\nAfter Reverse :-" << endl;

	print(reverse(head));

	cout << "\nAfter Recursive Reverse :-" << endl;

	print(reverseRecursive(head));

	return 0;
}