
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *left, *right;
    
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

int size(Node *root){
    if(root == NULL)
        return 0;
    
    return size(root->left) + size(root->right) + 1;
}

int main() {
    Node *root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->right = new Node(6);
    
    cout<<size(root);
}
