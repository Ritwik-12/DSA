#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
    //insert the node at the beginning of the linkedlist
    void inserNodeHead(int da,Node* &head){
        //inserting at head of the linked list
        Node* tem=new Node(da);
        tem->next=head;
        head=tem;
    }
    
    //insert the node at the end of the linkedlist
    
    void insertNodeEnd(int da,Node* &head){
        Node* temp=new Node(da);
        Node* ptr;
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;

    }
    
    //printing the linkedlist
    void print(Node* head){
        Node* ptr;
        ptr=head;
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr=ptr->next;
        }
    }
int main()
{

    Node* n1=new Node(10);
    inserNodeHead(12,n1);
    inserNodeHead(1,n1);
    inserNodeHead(6,n1);
    print(n1);
    cout<<endl;
    insertNodeEnd(4,n1);
    insertNodeEnd(3,n1);
    print(n1);
}