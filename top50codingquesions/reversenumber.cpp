//write a code to reverse a number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    int reversenumber=0;
    cout<<"Enter the number"<<endl;
    cin>>number;
    

    while(number>0){
        int rev=number%10;
        reversenumber=reversenumber*10+rev;
        number=number/10;
}
cout<<"the revere number is "<<reversenumber<<endl;
}