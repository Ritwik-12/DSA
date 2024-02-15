//sum of first n natural number
// #include<bits/stdc++.h>
// using namespace std;
// void sumesion(int n,int sum){
//     if(n==0) {
//         cout<<sum<<" ";
//     }

//     sum=sum+n;
//     sumesion(n-1,sum);
   
// }
// int main()
// {
//     int n;
//     cin>>n;
//     sumesion(n,0);
   
// }

//another way to do it is
// #include<bits/stdc++.h>
// using namespace std;
// void sumesion(int i,int sum){
//     if(i<1){
//         cout<<sum<<" ";
//         return;
//     }
//     sum=sum+i;
//     sumesion(i-1,sum);

// }
// int main()
// {
//     int n;
//     cin>>n;
//     sumesion(n,0);
// }

//functional way to do
#include<bits/stdc++.h>
using namespace std;
int sumesion(int n){
    if(n==0){
        return 0;
    }

    return n+sumesion(n-1);

}
int main()
{
    int n;
    cin>>n;
    int sum=sumesion(n);
    cout<<sum<<" ";
    
}