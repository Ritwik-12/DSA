#include<bits/stdc++.h>
using namespace std;

int power(int a,int b){
    //base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
      return a*power(a,b-1);
   
}
int main()
{
    int a=6;
    int b=3;
    cout<<power(a,b);
    
}