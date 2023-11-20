//array intersection
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr1[]={1,1,1,2,2,3,3,3};
    int arr2[]={2,3,3,3,4};
    int length1=sizeof(arr1)/sizeof(int);
    int length2=sizeof(arr2)/sizeof(int);

    vector<int>v;
    int left=0;
    int right=0;
    while(left<length1 && right <length2){
        while(left>0 && left<length1 && arr1[left]==arr1[left-1]){
            left++;
        }
          while(right>0 && right<length2 && arr2[right]==arr2[right-1]){
            right++;
        }

        if(left>=length1 && right>=length2){
            break;
        }

        if(arr1[left]<arr2[right]){
            left++;
        }else if(arr2[right]<arr1[left]){
            right++;
        }else{
            v.push_back(arr1[left]);
            left++;
            right++;
        }
    }
    for(auto it:v){
        cout<<it<<" ";
    }
}