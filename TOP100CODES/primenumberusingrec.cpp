//check if a number is prime or not using recursion
#include<bits/stdc++.h>
using namespace std;
bool isprime(int n,int i=2){
//base case
if(n<=2){
    return (n==2)?true:false;
}
if(n%i==0){
    return false;
}
//check until the square root of the number
if(i*i>n){
    return true;
}
  return isprime(n,i+1);
}
int main()
{

    int n;
    cout<<"Enter the number";
    cin>>n;
    if(isprime(n)){
        cout<<"The  number is prime";
    }
    else{
        cout<<"The number is not prime";
    }
}