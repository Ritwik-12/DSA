#include<bits/stdc++.h>
using namespace std;

class dqueue{
    public:

    int* arr;
    int front;
    int rear;
    int size;
    dqueue(int size){

        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void insert_at_front(int data){
        //check if the queue is full

            if((front==0 && rear==size-1) || (front=rear+1)){
                cout<<"the queue is full"<<" ";
            }
            else if(front==-1 && rear==-1){
                front=0;
                rear=0;
                arr[front]=data;
            }
            else if(front==0){
                front=size-1;
                arr[front]=data;
            }
            else{
                front--;
                arr[front]=data;
            }
    }

    // void print(){
     
    //  if(rear==0){
    //     int i=rear;
    //     cout<<arr[rear]<<" ";
    //     i=size-1;
    //     while(i>=front){
    //         cout<<arr[i]<<" ";
    //         i--;
    //     }
    //  }

    // }
    void print() {
        if (front == -1) {
            cout << "The queue is empty" << endl;
            return;
        }
        
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};
int main()
{

        dqueue q(5);

       // q.insert_at_front(4);
    
        q.insert_at_front(5);
      
         q.insert_at_front(8);
       
        
       q.print();

      



}