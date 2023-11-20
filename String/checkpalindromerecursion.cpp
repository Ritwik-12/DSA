//check if a string is palindrome or not using recursion
#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(string &str,int i,int n){

    //base case
    if(i>n-i-1){
        return true;
    }
    if(str[i]!=str[n-i-1]){
        return false;
    }
    i++;
    return (str,i,n);

}
int main()
{
    string str="hello";
    int n=str.length();
    if(checkpalindrome(str,0,n)){
        cout<<"The string is palindrome"<<endl;
    }
    else{
        cout<<"The string is not palindrome";
    }
    
}