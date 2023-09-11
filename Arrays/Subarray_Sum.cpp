//find the sumb array sum

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n=3;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //sub array sum

   int max_subsum=INT_MIN;

    for(int i=0;i<n;i++){
         int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            //cout<<sum<<" ";
            max_subsum=max(max_subsum,sum);
        }
    }
    cout<<endl;
    cout<<max_subsum;


}