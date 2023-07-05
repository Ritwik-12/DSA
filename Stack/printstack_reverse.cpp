//print the elements of the stak in the reverse order

#include<bits/stdc++.h>
using namespace std;

void print_reverse(stack<int>&st){
    stack<int>s;
    while(!st.empty())
    {
        int tem=st.top();
        s.push(tem);
        st.pop();
    }
    while(!s.empty()){
        int tem=s.top();
        cout<<tem<<" ";
        st.push(tem);
        s.pop();
    }
    
}
int main(){

    stack<int> st;
    st.push(4);
    st.push(14);
    st.push(4);
    st.push(24);

    print_reverse(st);

}