// Program for n’th node from the end of a Linked List

#include <bits/stdc++.h>
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



void printList(Node* node) {
	while (node != NULL) {
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
	push(&head, 6);

	printList(head);

	return 0;
}