#include<bits/stdc++.h>
using namespace std;

int main()
{

    //creation a queue

    queue<int> q;

    q.push(6);
    q.push(9);
    q.push(8);

    cout<<"the size of the queue is "<<q.size();
    cout<<endl;
    
    cout<<"the front of the queue is "<<q.front();

    q.pop();
    cout<<endl;

    cout<<"the front of the queue is "<<q.front();
    cout<<endl;
    cout<<"the sizeof the queue is "<<q.size();
    cout<<endl;

   if(q.empty()){
    cout<<"the queue is empty";
   }
   else{
    cout<<"the queue is not empty";
   }

}