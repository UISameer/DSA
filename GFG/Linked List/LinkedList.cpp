#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

int main() {

	// Allocate 3 nodes in the heap
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();

	head -> data = 1;
	head -> next = second;

	second -> data = 2;
	second -> next = third;

	third -> data = 3;
	third -> next = NULL;

	return 0;
}