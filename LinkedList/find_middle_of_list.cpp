//find the middle element of the linkelist
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
//function to find the length of the linkedlist

int getLength(Node* &head){
    int len=0;
    Node* tem=head;
    while(tem!=NULL){
        len++;
        tem=tem->next;
    }
    return len;
}
//function to find the middle element of the list
Node* getMiddle(Node* &head){
    int l=getLength(head);
    int ans=l/2;
    Node* tem=head;
    int count=0;
    while(count<ans){
        tem=tem->next;
        count++;
    }
    return tem;
}
int main()
{

        
        Node* head=NULL;
   createNode(head,0,4);
   createNode(head,4,12);
   createNode(head,12,2);
   createNode(head,2,1);
   createNode(head,1,8);
   createNode(head,8,10);
    print(head);
    Node* middle_element=getMiddle(head);
    cout<<"the middle element of the linkedlist is ";
    cout<<middle_element->data<<" ";
    
   
}