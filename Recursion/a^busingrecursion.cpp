//find a to the power b using recursion
// #include<bits/stdc++.h>
// using namespace std;
// int power(int a,int b){
//     if(b==0){
//         return 1;
//     }
//     if(b==1){
//         return a;
//     }
//     return  a*power(a,b-1);
// }
// int main()
// {
//     int a=2;
//     int b=7;
//     power(a,b); 
//     int p=power(a,b);
//     cout<<p<<" ";
// }

//more optimized approach
#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    cout<<b<<" ";
    
    if(b==0){
        return 1;
    }
    if(b==1)
        return a;
    int ans=power(a,b/2);
    cout<<ans<<" ";  
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main()
{
    int a=2;
    int b=5;
    int  p=power(a,b);
    cout<<endl;
    cout<<p<<" ";

}
