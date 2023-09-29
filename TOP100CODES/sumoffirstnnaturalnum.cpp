//using iteration
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=6;
//     int sum=0;
//     for(int  i=1;i<=6;i++){
//         sum=sum+i;
//     }
//     cout<<sum;
// }

//using recursion
#include<bits/stdc++.h>
using namespace std;
int sumofnnatural(int n){
    if(n==0 || n==1){
        return n;
    }
    return n+sumofnnatural(n-1);
}
int main()
{
    int n=6;
    int sum=sumofnnatural(n);
    cout<<sum<<" ";
}