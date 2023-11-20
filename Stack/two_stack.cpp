#include<bits/stdc++.h>
using namespace std;

class Twostack{
    public:

    int *arr;
    int top1;
    int top2;
    int size;

    Twostack(int size){

        this->size=size;

        top1=-1;
        top2=size;

        arr=new int[size];
    }

    void push1(int element){

        if(top2-top1>1){
            top1++;
            arr[top1]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }

    }
    void push2(int element){
        if(top2-top1>1){
            top2--;
            arr[top2]=element;
        }
        else{
            cout<<"stack overflow";
        }
    }
    int peek1(){

        if(top1>=0){
            return arr[top1];
        }
        else{
            cout<<"the stacsk is empty";
        }
    }

    int peek2(){

        if(top2<size){
            return arr[top2];
        }
        else{
            cout<<"the stacsk is empty";
        }
    }
    void pop1(){
        if(top1>=0){
            top1--;
        }
        else{
            cout<<"stack underflwo";
        }
    }
    void pop2(){
        if(top2<size){
            top2++;
        }
        else{
            cout<<"stack underflow";
        }
    }
};
int main()
{

    Twostack st(5);

    st.push1(3);
    st.push1(4);

     st.push2(14);
     st.push2(24);
     st.pop1();
     st.pop2();

    cout<<st.peek1()<<" ";
    cout<<st.peek2()<<" ";

}