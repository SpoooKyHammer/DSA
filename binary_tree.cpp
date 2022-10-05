// pre-order, post-order and in-order traversal

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void pre_order(Node* root){
    if(root != NULL){
        cout << root->data << "\t";
        pre_order(root->left);
        pre_order(root->right);
    }
}

void post_order(Node* root){
    if(root != NULL){
        post_order(root->left);
        post_order(root->right);
        cout << root->data << "\t";
    }
}


void in_order(Node* root){
    if(root != NULL){
        in_order(root->left);
        cout << root->data << "\t";
        in_order(root->right);
    }
}


/*
            1
          /   \
         2     3
        / \   / \ 
       4   5  6  7
*/
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Pre-order traversal:\t"; 
    pre_order(root);
    cout << endl;

    cout << "In-order traversal:\t"; 
    in_order(root);
    cout << endl;

    cout << "Post-order traversal:\t"; 
    post_order(root);
    cout << endl;
    return 0;
}