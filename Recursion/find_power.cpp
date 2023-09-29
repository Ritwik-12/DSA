/*
 problem statement->find power of a number using recursion

lest say a to the power b

now if b is even then the power will be a to b/2 * a to b/2

if bis odd then the power will be a * a to b/2 * a to b/2

in recursive function we need to mentation one base case and
we need to sove one case remaning cases will be solved by recursion
automatically
*/
#include<bits/stdc++.h>
using namespace std;
int  power(int a,int b){

    //base case

    if(b==0)
        return 1;
    if(b==1)
       return a;

    int ans =power(a,b/2);

    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main(){

    int a=4;
    int b=8;

    int ans=power(a,b);
    cout<<ans<<" ";

}