//reverse a string using stack

#include<bits/stdc++.h>
using namespace std;

int main()
{

 string str="Ritwik";
 stack<char> st; //declaring and empty stack of character

 for(int i=0;i<str.length();i++){ //put the elements of the string into the stack
    char ch=str[i];
    st.push(ch);
 }

 string ans="";//declaring an empty stirng

 while(!st.empty()){
    char ch=st.top();
    ans+=ch;
    st.pop();
 }
 cout<<ans<<" ";


}