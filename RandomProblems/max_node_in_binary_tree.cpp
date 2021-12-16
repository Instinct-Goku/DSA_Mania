
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

int max(int a, int b, int c){
    if(a > b && a > c)
        return a;
    else if(b > a && b > c)
        return b;
    else return c;
}

int max_node(Node *root){
    if(root == NULL)
        return INT_MIN;
    
    return max(root->data, max_node(root->left), max_node(root->right));
}

int main() {
    Node *root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->right = new Node(6);
    
    cout<<max_node(root);
}
