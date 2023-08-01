//reverse a given number 

#include<bits/stdc++.h>
using namespace std;
int reverse_number(int number){

    int reverse=0;
    int remainder;
    while(number>0){
        remainder=number%10;
        reverse=reverse*10+remainder;
        number=number/10;
    }
    return reverse;
}
int main(){

    int number;
    cout<<"Enter the number to reverse it";
    cin>>number;
    int rev_num= reverse_number(number);
    cout<<"The reverse of "<<number<<" is "<<rev_num;
    
}