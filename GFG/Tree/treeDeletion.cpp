// BST

#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* newNode(int data) {

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

	if (root == NULL) {
		return newNode(data);
	}

	if (data < root -> data) {
		root -> left = insertNode(root -> left, data);
	} else {
		root -> right = insertNode(root -> right, data);
	}

	return root;
 }

 /* Given a non-empty binary search tree, return the node
with minimum key value found in that tree. Note that the
entire tree does not need to be searched. */
struct Node* minValueNode(struct Node* node)
{
    struct Node* current = node;
 
    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}

 
void inorder(Node* temp)
{
    if (temp == NULL)
        return;
 
    inorder(temp->left);
    cout << temp->data << ' ';
    inorder(temp->right);
}

/* Given a binary search tree and a key, this function
deletes the key and returns the new root */
struct Node* deleteNode(struct Node* root, int data)
{
	//Base case
	if( root == NULL) {
		return root;
	}

	// If the key to be deleted is 
    // smaller than the root's
    // key, then it lies in left subtree
     if (data < root->data)
        root->left = deleteNode(root->left, data);

     // If the key to be deleted is
    // greater than the root's
    // key, then it lies in right subtree
     else if (data > root->data)
        root->right = deleteNode(root->right, data);


    // if key is same as root's key, then This is the node
    // to be deleted
    else {
    	// node with only one child or no child
    	if(root -> left == NULL) {
    		Node* temp = root -> right;
    		free(root);
    		return temp;
    	} else if(root -> right == NULL) {
    		Node* temp = root -> left;
    		free(root);
    		return temp;
    	}

    	// node with two children: Get the inorder successor
        // (smallest in the right subtree)
        Node* temp = minValueNode(root -> right);

         // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}	

// Time Complexity: The worst case time complexity of delete operation is O(h) where h is height of Binary Search Tree.
// Driver Code
int main()
{
    /* Let us create following BST
            50
        /     \
        30     70
        / \ / \
    20 40 60 80 */
    struct Node* root = NULL;
    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 70);
    root = insertNode(root, 60);
    root = insertNode(root, 80);
 
    cout << "Inorder traversal of the given tree \n";
    inorder(root);
 
    cout << "\nDelete 20\n";
    root = deleteNode(root, 20);
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);
 
    cout << "\nDelete 30\n";
    root = deleteNode(root, 30);
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);
 
    cout << "\nDelete 50\n";
    root = deleteNode(root, 50);
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);
 
    return 0;
}