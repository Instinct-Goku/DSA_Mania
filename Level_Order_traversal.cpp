
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



void level_traversal_2(Node *root){
    if(root == NULL)
        return;
    
    queue<Node> q;
    
    Node *t = new Node(-1);
    q.push(*root);
    q.push(*t);
    
     
    while(!q.empty()){
        Node *cur = &q.front();
        q.pop();
        if(cur->data == -1){
            if(q.empty())
                return;
            q.push(-1);
            cout<<endl;
        }
        else{
            cout<<cur->data<<" ";
            
            if(cur->left != NULL)
                q.push(*cur->left);
            
            if(cur->right != NULL)
                q.push(*cur->right);
            
        }
        
    }
}

void level_traversal(Node *root){
    if(root == NULL)
        return;
    
    queue<Node> q;
    
    q.push(*root);
    
    while(!q.empty()){
        Node *cur = &q.front();
        cout<<cur->data<<" ";
        q.pop();
        
        
        if(cur->left != NULL)
            q.push(*cur->left);
        
        if(cur->right != NULL)
            q.push(*cur->right);
    }
}

int main() {
    Node *root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->right = new Node(6);
    
    level_traversal_2(root);
}




/*

                2
        1               15
    3       4               6
        

*/
