//write a code for greatest common divisor

#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){

    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a==b){
        return a;
    }
    if(a>b){
        return gcd(a-b,b);
    }
    else {
        return gcd(a,b-a);
    }
}
int main()
{
    int a,b;
    cout<<"Enter the number to find therir gcd";
    cin>>a>>b;

    cout<<"gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b);
}