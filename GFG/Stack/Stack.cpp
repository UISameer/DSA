#include<bits/stdc++.h>
using namespace std;

#define MAX 10
int size = 0;

struct Stack {
	int items[MAX];
	int top = -1;

public:
	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
};

bool Stack:: push(int x) {

	if (top > MAX - 1) {
		cout << "Stack Overflow";
		return false;
	} else {
		items[++top] = x;
		cout << x << " pushed into stack\n";
		return true;
	}
}

int Stack:: pop() {

	if (top < 0) {
		cout << "Stack is empy";
		return 0;
	} else {
		return items[top--];
	}
}

int Stack:: peek() {

	if (top < 0) {
		cout << "Stack is empty";
		return 0;
	} else {
		return items[top];
	}
}

bool Stack::isEmpty()
{
	return (top < 0);
}

int main() {

	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout << s.pop() << " Popped from stack\n";

	return 0;
}