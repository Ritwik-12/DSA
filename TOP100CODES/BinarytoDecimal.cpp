//given a binary number in input convert back it into a decimal number

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int binary_number;
    int num=0;
    int sum=0;
    cout<<"Enter the number"<<endl;
    cin>>binary_number;
    while(binary_number>0){
      
       int lastdigit=binary_number%10;
       for(int i=0;i<num;i++){
        lastdigit=lastdigit*2;
       }

       num++;
       sum=sum+lastdigit;
       binary_number=binary_number/10;

    }
    cout<<sum<<" ";
}