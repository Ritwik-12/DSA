//implemeting curcular linekedlist
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
    //distractor
    ~Node(){
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};

void createNode(Node* &tail,int element,int data){
        if(tail==NULL){
                Node* newnode=new Node(data);
                tail=newnode;
                newnode->next=newnode;
        }
        else{
            Node* current=tail;
            while(current->data!=element){
                current=current->next;
                
            }
            Node* tem=new Node(data);
            tem->next=current->next;
            current->next=tem;

        }
}
void deletenodebyvalue(Node* &tail,int val){
    if(tail==NULL){
        cout<<"the list is empty";
        return;
    }
    else{
        
        Node* prev=tail;
        Node* current=prev->next;
        while(current->data!=val){
            prev=current;
            current=current->next;
        }
          
        prev->next=current->next;

        //if there exists only one node in linked list
        if(current==prev){
            tail=NULL;
        }
       //more than one node in linkedlist
        else if(tail==current){
            tail=prev;
        }
        current->next=NULL;
       
        delete current;
    }
}
void print(Node* &tail){

    if(tail==NULL){
        cout<<"the list is empty"<<endl;
    }
    Node* tem=tail;
    do{
        cout<<tem->data<<" ";
        tem=tem->next;
    }while(tem!=tail);
    cout<<endl;
}
int main()
{

  Node* tail=NULL;
  createNode(tail,0,5);
  createNode(tail,5,12);
  createNode(tail,12,1);
  createNode(tail,1,4);
  createNode(tail,4,9);
  createNode(tail,9,2);

  print(tail);

  deletenodebyvalue(tail,5);
  print(tail);
}