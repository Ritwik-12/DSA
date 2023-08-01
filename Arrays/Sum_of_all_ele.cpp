#include<iostream>
using namespace std;
int sum_of_all_element(int arr[],int n){

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{

    int arr[]={12,1,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    int result=sum_of_all_element(arr,size);
    cout<<"The sum of all the elements of the array is"<<endl<<result;


}