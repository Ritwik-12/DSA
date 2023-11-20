//insert an element at the bottom of the stack
#include<bits/stdc++.h>
using namespace std;
void insert_Bottom(stack<int>&st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }

    int num=st.top();
    st.pop();
    insert_Bottom(st,x);
    st.push(num);
}
void print_stack(stack<int>st){
    if(st.empty()){
        cout<<"The stack is empty";
    }
    while(!st.empty()){
        int num=st.top();
        cout<<num<<" ";
        st.pop();
    }
}
int main(){
    stack<int>st;
    st.push(9);
    st.push(4);
    st.push(1);
    print_stack(st);
    insert_Bottom(st,12);
    cout<<endl;
    print_stack(st);

}