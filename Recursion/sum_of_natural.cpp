//find the sum of n natural number 

#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    //base case
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}
int main()
{

    int n;
    cout<<"Enter the natural number ot which you find the sum";
    cin>>n;
    cout<< sum(n);
    

}