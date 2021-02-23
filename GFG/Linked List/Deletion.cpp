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


void deleteNode(Node** headRef, int key) {

	// Store head ode
	Node* temp = *headRef;
	Node* prev = NULL;

	// If head node has key to be deleted
	if (temp != NULL && temp -> data == key) {
		*headRef = temp -> next; // Changed head
		delete temp; // free old head
		return;
	}

	// Else Search for the key to be deleted,
	// keep track of the previous node as we
	// need to change 'prev->next' */
	while (temp != NULL && temp -> data != key) {
		prev = temp;
		temp = temp -> next;
	}

	if (temp == NULL) {
		return;
	}

	// Unlink the node from linked list
	prev -> next = temp -> next;

	delete temp;
}

// This function prints contents of
// linked list starting from the
// given node
void printList(Node* node)
{
	while (node != NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
}

int main() {

	Node* head = NULL;

	// Add elements
	push(&head, 7);
	push(&head, 1);
	push(&head, 3);
	push(&head, 2);

	puts("Created Linked List: ");
	printList(head);

	deleteNode(&head, 1);
	puts("\nLinked List after Deletion of 1: ");

	printList(head);

	return 0;
}