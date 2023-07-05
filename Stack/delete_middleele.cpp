#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>&s,int count,int size){
    
    //base case
    if(count==size/2){
        s.pop();
        return;
    }
    int tem=s.top();
    s.pop();
    solve(s,count+1,size);

    s.push(tem);

}
void delete_middleele(stack<int>&s,int n){
    int count=0;
    solve(s,count,n);
}
void printStack(stack<int> s) {
    while (!s.empty()) { 
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}  
int main()
{

       stack<int> s;

       s.push(12);
       s.push(1);
       s.push(4);
       s.push(2);
       s.push(8);
       s.push(6);
       int n=s.size();
         printStack(s);
         cout<<endl;
       delete_middleele(s,n);
       
        printStack(s);
}