#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){

        this->size=size;

        arr=new int[size];
         top =-1;
    }

        void push(int element){

            if(top<size-1){
                top++;
                arr[top]=element;
            }
            else{
                cout<<"Stack Overflow"<<endl;
            }
        }

        int pop(){

            if(top>=0){
                top--;
            }
            else{
                cout<<"Stack underflow";
            }
        }

        int peek(){

            if(top>=0){
                return arr[top];
            }
            else{
                cout<<"stack is empty";
            }
        }

        bool isEmpty(){
            if(top>=0){
                cout<<"the stack is not empty";
            }
            else{
                cout<<"the stack is empty";
            }
        }

};
int main(){

    Stack st(5);

    st.push(22);
    st.push(31);
    cout<<st.peek();
}