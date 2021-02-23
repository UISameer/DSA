// Write a function that counts the number of times a given int occurs in a Linked List
// Time Complexity: O(n)
// Auxiliary Space: O(1)

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

// >>> Method 1- Without Recursion
int checkOccurrence(Node *head, int key) {
	int count =  0;
	Node* current = head;
	while (current != NULL) {
		if (current -> data == key) {
			count++;
		}
		current = current ->  next;
	}
	return count;
}

// >>> Method 1- With Recursion
/* Counts the no. of occurrences of a node
(search_for) in a linked list (head)*/
int checkOccurrenceRecursive(struct Node* head, int key) {
	int count =  0;
	if (head == NULL)
		return count;
	if (head -> data == key)
		count++;
	return checkOccurrenceRecursive(head->next, key);
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

	push(&head, 7);

	cout << "No of Occurrences of 7 is: - " << checkOccurrence(head, 7) << endl;

	cout << "Created Linked list is: " << endl;

	printList(head);

	return 0;
}