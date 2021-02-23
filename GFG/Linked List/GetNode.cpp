// Write a function to get Nth node in a Linked List

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void push(Node** headRef, int newData) {

	Node* newNode = new Node();
	newNode -> data  = newData;
	newNode -> next = *headRef;
	*headRef = newNode;
}

int getNodeData(Node* head, int index) {
	int count = 0;
	Node* current = head;
	while (current != NULL) {
		if (count == index)
			return current -> data;
		count++;
		current = current -> next;
	}
	return count;
}

void printList(Node* node) {
	while (node != NULL)
	{
		cout << " " << node->data;
		node = node->next;
	}
}

int main() {

	Node* head = NULL;

	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);
	push(&head, 5);

	cout << "Node at index 2 is: - " << getNodeData(head, 2) << endl;

	printList(head);

	return 0;
}