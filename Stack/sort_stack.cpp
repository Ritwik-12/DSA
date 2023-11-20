//sort a stack

#include<bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int>&st,int num){
    //base case
    if(st.empty()|| (st.top()<num)){
        st.push(num);
        return;
    }
    int n=st.top();
    st.pop();
    sortedInsert(st,num);
    st.push(n);
}
void sortStack(stack<int>&st){
    //base case
    if(st.empty()){
        return;
    }

    int  num=st.top();
    st.pop();
    sortStack(st);
    sortedInsert(st,num);

}
void printstack(stack<int>st){
    if(st.empty()){
        cout<<"the stack is empty";
    }
    while(!st.empty()){
        int n=st.top();
    cout<<n<<" ";
    st.pop();
    }
    
   
}
int main()
{
    stack<int>st;
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(-3);
    st.push(10);
    printstack(st);
    sortStack(st);
    cout<<endl;
    printstack(st);


}