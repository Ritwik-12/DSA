//reverse a string using reursion

// #include<bits/stdc++.h>
// using namespace std;
// void reverse(string &str,int i,int j){
//     //base case
//     if(i>j){
//         return;
//     }
//     //solve 1 case
//     swap(str[i],str[j]);
//     i++;
//     j--;
//     reverse(str,i,j);

// }
// int main()
// {

//     string str="Ritwik";
//     int n=str.length();
//     reverse(str,0,n-1);
//     cout<<str<<" ";
// }

//rverse the string usin only one pointer

#include<bits/stdc++.h>
using namespace std;
void reverse(string &str,int i,int n){
    //base case
    if(i>n-i-1){
        return;
    }
    swap(str[i],str[n-i-1]);
    i++;
    reverse(str,i,n);

}
using namespace std;
int main()
{

    string str="Hello";
    int  n=str.length();
    reverse(str,0,n);
    cout<<str<<" ";
}