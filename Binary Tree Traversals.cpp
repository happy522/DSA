// tree traversals
#include <iostream>
#include <queue>
using namespace std;
 
struct Node {
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void preorder(Node* node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

void inorder(Node* node)
{
    if (node == NULL)
        return;

    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}


void postorder(Node* node)
{
    if (node == NULL)
        return;
 
    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}

Node* inputBinaryTree() {
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;
    if(rootData == -1) 
        return NULL;    
    Node* root = new Node(rootData);
    
    queue<Node*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0) {
        Node* front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter left child of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if(leftChildData != -1) {
            Node* child = new Node(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }
        
        cout << "Enter right child of " << front->data << endl;
        int rightChildData;
        cin >> rightChildData;
        if(rightChildData != -1) {
            Node* child = new Node(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

int main()
{
    struct Node* root = inputBinaryTree(); // BFS input - levelwise
    // sample input -> 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
 
    cout << "Preorder traversal -> ";
    preorder(root);
    cout << endl;
 
    cout << "Inorder traversal -> ";
    inorder(root);
    cout << endl;
 
    cout << "Postorder traversal -> ";
    postorder(root);
 
    return 0;
}
