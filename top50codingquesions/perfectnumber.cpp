//check for perfect number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    int sum=0;
    cout<<"Enter the number";
    cin>>number;
    for(int i=1;i<number;i++){
      if(number%i==0){
        sum=sum+i;
      }
    }
    if(sum==number){
        cout<<"The number is perfect";
    }
    else{
        cout<<"The number is not perfect";
    }
}