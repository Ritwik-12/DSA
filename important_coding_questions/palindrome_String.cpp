#include<bits/stdc++.h>
using namespace std;
int is_palindrome(string str){
    int i=0;
    int j=str.length()-1;
    while(i<=j){
       if(str[i]!=str[j]){
            return 0;
       }
       else{
        i++;
        j--;
       }
    }
    return 1;
}
int main()
{

        string str="wow";
        int check=is_palindrome(str);
        if(check==1){
            cout<<"The string is palindrome";
        }
        else{
            cout<<"The string  is not palindorme";
        }
}