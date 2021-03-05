#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* left;
	struct Node* right;
};

Node* createNode(int data) {

	Node* newNode = new Node();
	if (!newNode) {
		cout << "Memory Errorr";
		return;
	}

	newNode -> data = data;
	newNode- -> left = newNode -> right = NULL;
	return newNode;
}


Node* inserNode(Node* root, int data){

	// If the tree is empty create root and return
	if (root == NULL) {
		root = createNode(data);
		return root;
	}

	// Else, do level order traversal until we find an empty
    // place, i.e. either left child or right child of some
    // node is pointing to NULL.
    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
    	Node* temp = q.front();
    	q.pop();

    	if(temp -> left != NULL){
    		q.push(temp -> left);
    	} else {
    		temp -> left = createNode(data);
    		return root;
    	}

    	if(temp -> right != NULL){
    		q.push(temp -> right);
    	} else {
    		temp -> right = createNode(data);
    		return root;
    	}
    }

}

int main(){

	struct Node* root = new Node(1);
	root -> left = new Node(2);
	root -> right = new Node(3);
	root->left->left = new Node(4);
	return 0;
}