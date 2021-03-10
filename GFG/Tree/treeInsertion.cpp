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
		return 0;
	}

	newNode -> data = data;
	newNode -> left = newNode -> right = NULL;
	return newNode;
}


Node* insertNode(Node* root, int data){

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

/* Inorder traversal of a binary tree */
 
void inorder(Node* temp)
{
    if (temp == NULL)
        return;
 
    inorder(temp->left);
    cout << temp->data << ' ';
    inorder(temp->right);
}

int main(){

	 Node* root = createNode(10);
    root->left = createNode(11);
    root->left->left = createNode(7);
    root->right = createNode(9);
    root->right->left = createNode(15);
    root->right->right = createNode(8);
 
    cout << "Inorder traversal before insertion: ";
    inorder(root);
    cout << endl;
 
    int key = 12;
    root = insertNode(root, key);

    cout << "Inorder traversal after insertion: ";
    inorder(root);
    cout << endl;
 
 
 
    return 0;
}