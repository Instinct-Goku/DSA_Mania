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



void left_util(Node *root, unordered_map<int,int> &m, int level){
    if(root == NULL)
        return;
        
    if(m.find(level) == m.end()){
        m[level] = root->data;
    }
    
    left_util(root->left,m, level+1);
    left_util(root->right, m, level+1);
   
}


void left_side_view(Node *root){
    if(root == NULL)
        return;
    
   unordered_map<int,int> m;
   
   left_util(root, m, 0);
   
   cout<<"left : ";
   for(auto x : m){
       cout<<x.second<<" ";
   }
}



void right_util(Node *root, unordered_map<int,int> &m, int level){
    if(root == NULL)
        return;
        
    if(m.find(level) == m.end()){
        m[level] = root->data;
    }
    
    
    right_util(root->right, m, level+1);
   right_util(root->left,m, level+1);
}


void right_side_view(Node *root){
    if(root == NULL)
        return;
    
   unordered_map<int,int> m;
   
   right_util(root, m, 0);
   
   cout<<"right : ";
   for(auto x : m){
       cout<<x.second<<" ";
   }
}





int main() {
    Node *root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->right = new Node(6);
    
    left_side_view(root);
    cout<<endl;
    right_side_view(root);
}
