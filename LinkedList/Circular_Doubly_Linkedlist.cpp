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

    //distractor
    ~Node(){
        if(this->next!=NULL){
            delete this;
            this->next=NULL;
        }
    }
};

void insert_Node(Node* &head,int element,int data)
{
    if(head==NULL){
        Node* temp=new Node(data);
        head=temp;
        temp->next=temp;
    }
    else{
        Node* current=head;
        while(current->data!=element){
            current=current->next;
        }
        Node* nod=new Node(data);
        nod->next=current->next;
        nod->prev=current;
        current->next=nod;
    }
    
}
void print(Node* &head){
    if(head==NULL){
        cout<<"the list is empty"<<endl;
    }
    Node* tem=head;
    do{
        cout<<tem->data<<endl;
        tem=tem->next;
    }while(tem!=head);
    cout<<endl;
}
void deletenode(Node* &head,int delete_ele){
    
    if(head==NULL){
        cout<<"there is no elements present in the linkedlist";
    }
    else{

        Node* pre=head;
        Node* current=pre->next;
        while(current->data!=delete_ele){
            pre=current;
            current=current->next;
        }
        pre->next=current->next;
        if(pre==current){
            head=NULL;
        }
        else if(head==current){
            head=pre;
        }
        current->next->prev=pre;
        current->next=NULL;
        current->prev=NULL;
        delete current;
    }
}
int main()
{

        Node* head=NULL;
        insert_Node(head,0,4);
        insert_Node(head,4,5);
        insert_Node(head,5,2);

        print(head);

        cout<<endl;

        deletenode(head,5);
        print(head);
}