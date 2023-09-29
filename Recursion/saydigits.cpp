//given a number say the digits of that number
//eg-321 -> three two one

#include<bits/stdc++.h>
using namespace std;
void saydigits(int n){
  string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  if(n==0)
    return ;
    int digit=n%10;
    n=n/10;
     saydigits(n);
     cout<<arr[digit]<<" ";
}
int main()
{

   
    int n;
    cout<<"Enter the number";
    cin>>n;
    saydigits(n);
}