//sexy prime number
//the prime number whose difference is 6 known as sexy prime
#include<bits/stdc++.h>
using namespace std;
int check_prime(int number){
    int count=0;
    if(number==0 || number==1){
        return number;
    }
    for(int i=2;i<number;i++){
        if(number%i==0){
            count++;
        }
    }
    return count;
}
int main()
{

    int start,end;
    cout<<"Enter the staring of the number";
    cin>>start;
    cout<<endl;
    cout<<"Enter the ending of the number";
    cin>>end;
    vector<int>v;
    for(int i=start;i<=end;i++){
       int cp= check_prime(i);
        if(cp==0){
            v.push_back(i);
            cout<<i<<" ";
        }
    }

    for(auto it:v){
        cout<<it<<" ";
    }

    
}