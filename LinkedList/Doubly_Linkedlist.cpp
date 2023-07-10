//implementation of doubly linkedlist
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constractor

    Node(int data){

            this->data=data;
            this->prev=NULL;
            this->next=NULL;
    }
    //distructor
    ~Node(){
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }
};

void print(Node* &head){

    Node* tem=head;
    while(tem!=NULL){
        cout<<tem->data<<endl;
        tem=tem->next;
    }
}

int length(Node* &head){

    Node* tem=head;
    int len=0;
    while(tem!=NULL){
        len++;
        tem=tem->next;
    }
    return len;
}

void insertatHead(Node* &head,int data){

        Node* tem=new Node(data);
        tem->next=head;
        head->prev=tem;
        head=tem;
}

void insertatEnd(Node* &head,int data){
    Node* tem=new Node(data);
  Node* ptr=head;
  while(ptr->next!=NULL){
    ptr=ptr->next;
  }
  
  ptr->next=tem;
  tem->prev=ptr;

}
void insertatany_Position(Node* &head,int position,int data){

    int count=1;
    Node* ptr=head;
    if(position==1){
         insertatHead(head,data);
         return;
    }
    while(count<position-1){
        ptr=ptr->next;
        count++;
    }
    Node* temp=new Node(data);
    temp->next=ptr->next;
    ptr->next->prev=temp;
    ptr->next=temp;
    temp->prev=ptr;

    ptr->next->prev=temp;
    ptr->next=temp;
    
    
}
void deleteany_position(Node* &head,int position){

    //deleting the first node of the linke list 
    if(position==1){
        Node* tem=head;
        head=head->next;
        if(head!=NULL){
            head->prev=NULL;
        }
        tem->next=NULL;
        delete tem;
    }
    else{

    Node* ptr=head;
    Node* current=head;
    int count=1;
    Node* pre=NULL;
    while(count<=position-1){
    pre=current;
    current=current->next;
    count++;
    }
    pre->next=current->next;
    current->next->prev=pre;
    
    current->next=NULL;
      current->prev=NULL;
      delete current;

    }
  
  
   
}
int main(){

    Node* n=new Node(10);
    //Node* head=n;
    // print(head);
    // cout<<endl;
    // cout<<length(head)<<" ";
    // insertatHead(head,12);
    //  insertatHead(head,4);
    insertatEnd(n,2);
    insertatEnd(n,4);
     print(n);
     cout<<endl;
      deleteany_position(n,1);
     print(n);
    
    
}