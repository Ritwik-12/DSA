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
    ~Node(){
        if(next!=NULL){
            delete next;
            this->next=NULL;
        }
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

    void insert_anyposition(Node* &head,int data ,int position){


        if(position==1){
            inserNodeHead(data,head);
            return;
        }

            Node* tem=head;
            int count=1;
            while(count<position-1){
                tem=tem->next;
                count++;
            }
            if(tem->next==NULL){
                insertNodeEnd(data,head);
                return;
            }
            Node* n=new Node(data);
            n->next=tem->next;
            tem->next=n;


    }

    void deleteany_node(Node* &head,int position){

        //deleting the first node

        if(position==1){
            Node* tem=head;
            head=head->next;
            tem->next=NULL;
            delete tem;

        }
        else{

            int count=1;
            Node *current=head;
            Node *prev=NULL;
            while(count<=position-1){
                prev=current;
                current=current->next;
                count++;
            }
            prev->next=current->next;
            current->next=NULL;
            delete current;
        }


    }
    void delete_elementby_data(Node* &head,int key){

        Node* current=head;
        Node* prev=NULL;

        while(current->data!=key){
            prev=current;
            current=current->next;
        }
        prev->next=current->next;
        current->next=NULL;
        delete current;

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
    cout<<endl;
    insertNodeEnd(4,n1);
    insertNodeEnd(3,n1);
    // print(n1);

    insert_anyposition(n1,12,1);
     insert_anyposition(n1,12,5);
//     print(n1);
//     cout<<endl;
//    //deleteany_node(n1,1);
//    deleteany_node(n1,3);
    
//     print(n1);

//delete_elementby_data(n1,3);
deleteany_node(n1,1);
print(n1);
}