//check if a given string is palindrome or not
#include<bits/stdc++.h>
using namespace std;
bool check_palindrome(string &str,int i,int n){

    if(i>=n/2) return true;

    if(str[i]!=str[n-i-1]){
        return false;
    }
    check_palindrome(str,i+1,n);


}
int main()
{
    string str="mada";
    int n=str.length();
    bool pal=check_palindrome(str,0,n);
    if(pal){
        cout<<"The string is palindrome"<<endl;
    }
    else{
        cout<<"The string is not palindrome"<<endl;
    }
}