#include<bits/stdc++.h>
using namespace std;
int fibonacci_series(int n){
    if(n==0|| n==1){
        return n;
    }
    else{
        return (fibonacci_series(n-1)+fibonacci_series(n-2));
    }
}
int main(){

    int n;
    cout<<"Enter the no of terms";
    cin>>n;
    int i=0;
    while(i<n){
        cout<<" "<<fibonacci_series(i);
        i++;
    }


}