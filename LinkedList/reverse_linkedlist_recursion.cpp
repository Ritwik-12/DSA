//reverse a linkedlist using recursion
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

Node* reverse_list_rec(Node* head){
    //base case
    if(head==NULL || head->next==NULL){ //if there exists no node or only one node
        return head;
    }

    Node* chead=reverse_list_rec(head->next);

    head->next->next=head;
    head->next=NULL;
    return chead;
}
Node* rev_linkedlist(Node* &head){
    return reverse_list_rec(head);
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
   head= rev_linkedlist(head);
   cout<<head->data<<" ";
   cout<<"after reversing the list will be"<<endl;  
   cout<<endl;
   print(head);

}