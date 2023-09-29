/*
    proble statement ->check if a string is palindrome or not using 
    recursion

*/

#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(string s,int i,int j){

    if(i>j)
        return true ;
    
    if(s[i]!=s[j])
        return false;
    else{

            return  check_palindrome(s,i+1,j-1);
    }
   
}
int main()
{
   string s="mom";

   bool ispalin=check_palindrome(s,0,s.length()-1);

   if(ispalin){
    cout<<"the string is palindrome";
   }
   else{
    cout<<"the string is not palindrome";
   }

}