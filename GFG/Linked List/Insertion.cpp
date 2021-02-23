// 1) At the front of the linked list
// 2) After a given node.
// 3) At the end of the linked list.

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

// Time complexity of insertAfter() is O(1) as it does constant amount of work.
// After a given node.
void insertAfter(Node* prevNode, int newData) {

	// Check if prevNode is NULL
	if (prevNode == NULL) {
		cout << "Prev node is null" << endl;
		return;
	}

	// Create new node
	Node* newNode = new Node();

	// Put the data
	newNode -> data = newData;

	// Make next of new node as next of prev node
	newNode -> next = prevNode -> next;

	// Move newt of prev node to current node
	prevNode -> next = newNode;
}

// > This method can also be optimized to work in O(1) by keeping an extra pointer to tail of linked list/
// Time complexity of append is O(n) where n is the number of nodes in linked list.
// Since there is a loop from head to end, the function does O(n) work.
// At the end of the linked list.
void append(Node** headRef, int newData) {

	// Create
	Node* newNode = new Node();

	Node* last = *headRef;

	// Put the data
	newNode -> data = newData;

	// Since its last node make next of it as NULL
	newNode -> next = NULL;

	// If the linked list is empty
	// make new node as head
	if ( *headRef == NULL) {
		*headRef = newNode;
		return;
	}

	// Else traverse till alst node
	while (last->next != NULL) {
		last = last -> next;
	}

	// Change next of alst node
	last -> next = newNode;
	return;
}

// This function prints contents of
// linked list starting from head
void printList(Node *node)
{
	while (node != NULL)
	{
		cout << " " << node->data;
		node = node->next;
	}
}

int main() {

	// Allocate 3 nodes in the heap
	Node* head = NULL;

	// Insert 6. So linked list becomes 6->NULL
	append(&head, 6);

	// Insert 7 at the beginning.
	// So linked list becomes 7->6->NULL
	push(&head, 7);

	// Insert 1 at the beginning.
	// So linked list becomes 1->7->6->NULL
	push(&head, 1);

	// Insert 4 at the end. So
	// linked list becomes 1->7->6->4->NULL
	append(&head, 4);

	// Insert 8, after 7. So linked
	// list becomes 1->7->8->6->4->NULL
	insertAfter(head->next, 8);

	cout << "Created Linked list is: ";

	printList(head);

	return 0;
}