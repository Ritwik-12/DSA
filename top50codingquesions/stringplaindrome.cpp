//check if a string is palindrome or not
#include<bits/stdc++.h>
using namespace std;
bool is_palindrome(string str){
    int i=0;
    int j=str.length()-1;
    int flag=false;
    while(i<=j){
        if(str[i]==str[j]){
               flag=true;
                i++;
                j--;
        }
        else{
            flag=false;
            break;
        }
    }
    return flag;
   
}
int main()
{
    string str="mada";
    bool check=is_palindrome(str);
    if(check){
        cout<<"The string is palindrome";
    }
    else{
        cout<<"The String is not  palindrome";
    }

}