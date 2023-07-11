//implementation of circular queue
#include<bits/stdc++.h>
using namespace std;
class circularQueue{
    public:

    int* arr;
    int front;
    int rear;
    int size;

    //constractor
    circularQueue(int size){

        this->size=size;

        arr=new int[size];
        front=-1;
        rear=-1;
    }

    //function to insert an element in the queue
    void enqueue(int data){
        //check if the queue is full
        if(front==0 && rear==size-1 || rear==(front-1)%(size-1)){
            cout<<"the queue is full";
        }
        else if(front==-1){
            front=0;
            rear=0;
            arr[rear]=data;

        }
        else if(rear==size-1&& front!=0){
            rear=0;
            arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }
    //function to delete and or pop elements form the queue
    void dequeue(){
        if(front==-1 && rear==-1){
            cout<<"no element present in the queue"<<endl;
        }
        if(front==size-1){
          arr[front]=-1;
          front=0;
        }
        else{
                arr[front]=-1;
                front++;
        }
    }

    //function to print the elements of the circular queue

    void print(){
        if(front==-1 && rear==-1){
            cout<<"the queue is empty";
        }

            if(rear>=front){
                for(int i=front;i<=rear;i++){
                    cout<<arr[i]<<" ";
                }
            }
            else{
                for(int i=0;i<=rear;i++){
                    cout<<arr[i]<<" ";
                }
                for(int i=front;i<size;i++){
                    cout<<arr[i]<<" ";
                }
            }
        }

};
int main()
{

        circularQueue q(5);

        q.enqueue(6);
        q.enqueue(9);
        q.enqueue(12);
        q.enqueue(8);
         q.enqueue(18);

        q.print();
        
        q.dequeue();
         q.dequeue();

        cout<<endl;

        q.print();

        q.enqueue(2);
        q.enqueue(4);

        cout<<endl;
        q.print();
}