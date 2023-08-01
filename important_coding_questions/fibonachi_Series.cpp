//write a code find febonachi series upto nth term

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a=0;
    int b=1;
    int n;
    cout<<"Enter the term upto which you want to find the series";
    cin>>n;
    int c;
    cout<<"the fibonaci series upto a given term is "<<endl;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<=n;i++){
    int c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
    }

}