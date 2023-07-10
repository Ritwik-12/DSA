//reverse a linkedlist using  recursive method
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constractor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void createNode(Node* &head,int element,int data){
    if(head==NULL){
        Node* n=new Node(data);
        head=n;
    }
    else{

        Node* current=head;
        while(current->data!=element){
            current=current->next;
        }
        Node* tem=new Node(data);
        tem->next=current->next;
        current->next=tem;
    }
}
void print(Node* &head){

    if(head==NULL){
        cout<<"No node present in the linkedlist";
    }
    Node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

//code for reversing the linkelist
Node* reverseList(Node* &head){

    Node* prev=NULL;
    Node* current=head;
    Node* forward=NULL;
    while(current!=NULL){
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
    }
    head=prev;  
  
}
int main()
{
   Node* head=NULL;
   createNode(head,0,4);
   createNode(head,4,12);
   createNode(head,12,2);
   createNode(head,2,1);
   createNode(head,1,8);
   print(head);
   reverseList(head);
   cout<<"after reversing the list will be"<<endl;  
   cout<<endl;
   print(head);
}