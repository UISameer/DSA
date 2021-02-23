// Find Length of a Linked List (Iterative and Recursive)

#include <bits/stdc++.h>
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

int getCountIterative(Node* head) {
	int count = 0;
	Node* current = head;
	while (current != NULL) {
		current = current -> next;
		count ++;
	}
	return count;
}

int getCountRecursive(Node* head) {
	int count = 0;
	if (head == NULL) {
		return count;
	}
	return 1 + getCountRecursive(head -> next);;
}

// This function prints contents of
// linked list starting from head
void printList(Node *node)
{
	while (node != NULL)
	{
		cout << node->data;
		node = node->next;
	}
}

int main() {

	// Allocate 3 nodes in the heap
	Node* head = NULL;

	// Insert 6. So linked list becomes 6->NULL
	push(&head, 6);

	// Insert 7 at the beginning.
	// So linked list becomes 7->6->NULL
	push(&head, 7);

	// Insert 1 at the beginning.
	// So linked list becomes 1->7->6->NULL
	push(&head, 1);

	// Insert 4 at the end. So
	// linked list becomes 1->7->6->4->NULL
	push(&head, 4);

	cout << getCountIterative(head) << endl;

	cout << getCountRecursive(head) << endl;

	printList(head);

	return 0;
}