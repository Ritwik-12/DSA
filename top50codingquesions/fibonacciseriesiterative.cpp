//find the fobonacci series upto the nth term using iteration'
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cout<<"Ente the number of terms"<<" ";
    cin>>n;

     a=0;
     b=1;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=2;i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    
}