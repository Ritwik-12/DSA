#include<bits/stdc++.h>
using namespace std;
class Queue{
   
    int* arr;
    int qfront;
    int qrear;
    int size;
     public:
    Queue(int size){
        this->size=size;

        arr =new int[size];
        qrear=0;
        qfront=0;
    }

    void enqueue(int data){

        if(qrear==size){
            cout<<"the queus is full"<<" ";
        }

       else{
       
        arr[qrear]=data;
         qrear++;
        
    }
 
  }

  int dequeue(){
    if(qfront==qrear){
        cout<<"the queue is empty";
    }
    else{
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==qrear){
                qfront=0;
                qrear=0;
            }

                return ans;
    }

  }
  int front(){
    if(qfront==qrear){
        return -1;
    }
    else{
        return arr[qfront];
    }
  }
  int rear(){
    if(qfront==qrear){
        return -1;
    }
   
        return arr[qrear-1];
  }

  void isempty(){
    if(qfront==qrear){
        cout<<"the queue is empty";
    }
    else{
        cout<<"the queue is not empty";
    }
  }
  void print(){
    if(qfront==qrear){
        cout<<"the queus is empty";
    }
    else{
        int i=qfront;
        while(i!=qrear){
            cout<<arr[i]<<" ";
            i++;

        }
    }
  }

};

int main(){

    Queue q(4);
    
    q.enqueue(8);
     q.enqueue(28);
      q.enqueue(18);
       q.enqueue(12);
    int f=q.front();
    cout<<f<<" ";
    q.print();

    int rip=q.rear();
    cout<<rip<<" ";
}

