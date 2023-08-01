#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the number";
    cin>>n;

    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
    }

    if(count==0){
        cout<<"The number is prime";
    }
    else{
        cout<<"The number is not prime";
    }
}