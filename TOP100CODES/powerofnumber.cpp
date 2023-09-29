//find the power of a number using recursion
#include<bits/stdc++.h>
using namespace std;

int powernum(int n,int power){
    if(power==0){
        return 1;
    }
    if(power==1){
        return n;
    }

      return n*powernum(n,power-1);
}
int main()
{
   int n=4;
   int power=0;
   int result=powernum(n,power);
   cout<<result;


}