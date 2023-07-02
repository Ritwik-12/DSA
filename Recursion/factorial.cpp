#include<bits/stdc++.h>
using namespace std;
int fac(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}
int main()
{
    int n;

    cout<<"Enter the no of terms";
    cin>>n;
    int result=fac(n);
    cout<<result<<" ";


}