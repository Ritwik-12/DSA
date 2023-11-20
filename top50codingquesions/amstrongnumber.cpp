//amstrong number
//eg 371,153 -->cumbe sum =that number
#include<bits/stdc++.h>
using namespace std;
bool isamstrong(int num){
    int sum=0;
    int number=num;
    int copy=num;
    // if(number<10){
    //     cout<<"The number is amstrong";
    // }
  
        
    int digitcount=0;
    while(copy>0){
        digitcount++;
        copy=copy/10;
    }   

     while(number>0){
       int dc=digitcount;
      
      int digit=number%10;
      int power=1;
      while(dc>0){
      
        power=power*digit;
        dc--;
      }
      
      sum=sum+power;
     
      number=number/10;
     
    }


     if(num==sum){
        return true;
    }
    else{
        return false;
    }
   
}
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    bool isams=isamstrong(num);
    if(isams==true){
        cout<<"The number is amstrong number";
    }
    else{
        cout<<"The number is not amstrong number";
    }
    
}

