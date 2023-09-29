#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct  Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};
int main()
{
     struct Node* root=new Node(5);
     root->left=new Node(6);
     root->right=new Node(9);

     root->left->left=new Node(12);
     root->right->right=new Node(19);
}