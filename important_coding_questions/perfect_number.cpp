//a number is said to ba a perfect number if sum of its
//divisor form the same number
//eg. 6 -> its divisors are(1,2,3)(excluding 6)1+2+3=6

#include<iostream>
using namespace std;
void perfect_number(int number){
    int sum=0;
    for(int i=1;i<number;i++){
        if(number%i==0){
            sum+=i;
        }
    }
    if(sum==number){
        cout<<"The number is parfect";
    }
    else{
        cout<<"The number is not perfect";
    }
}
int main()
{
    int number;
    cout<<"Enter the number to check if it is perfect or not ";
    cin>>number;
    perfect_number(number);
}