//  Floyd’s Cycle-Finding Algorithm
// Traverse linked list using two pointers.
// Move one pointer(slow_p) by one and another pointer(fast_p) by two.
// If these pointers meet at the same node then there is a loop.
// If pointers do not meet then linked list doesn’t have a loop.

#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

// Time complexity of push() is O(1) as it does constant amount of work.
// At the front of the linked list
void push(Node** headRef, int newData) {

	// Allocate node
	Node* newNode = new Node();

	// Put the data
	newNode -> data  = newData;

	// Make next of new node as head
	newNode -> next = *headRef;

	// Move head to point to new Node
	*headRef = newNode;
}


int detectLoop(Node* head) {

	Node *slowP, *fastP = head;

	while (slowP && fastP &&  fastP -> next) {
		slowP = slowP -> next;
		fastP = fastP -> next-> next;
		if (slowP == fastP) {
			return 1;
		}
	}
	return 0;
}

int main() {
	/* Start with the empty list */
	Node* head = NULL;

	push(&head, 20);
	push(&head, 4);
	push(&head, 15);
	push(&head, 10);

	/* Create a loop for testing */
	head->next->next->next->next = head;
	if (detectLoop(head))
		cout << "Loop found";
	else
		cout << "No Loop";
	return 0;
}