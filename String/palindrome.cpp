//check if a string is palindrome by removing the special character
//and convert the string into lower case

#include<bits/stdc++.h>
using namespace std;
string isPalindrome(string s){

    string tem="";
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>=0 && s[i] <=9)){
            tem.push_back(s[i]);
        }
    }

    return tem;
}
void to_lowercase(string &s){
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]-'A'+'a';
        }
    }
}
int check_palindrome(string &result)
{
        int i=0;
        int j=result.length()-1;

        while(i<=j){
            if(result[i]!=result[j]){
                return 0;
            }
            else{
                i++;
                j--;
            }
        }
        return 1;

}

int  main()
{

    string s="#@Wow*";
    cout<<"The original string is "<<s<<endl;
    to_lowercase(s);
    cout<<"The string after convert into lowercase "<<endl<<s;
    cout<<endl;
    string result=isPalindrome(s);
    cout<<"The modified string is "<<endl<<result;
    cout<<endl;
    int checker=check_palindrome(result);
    if(checker==0){
        cout<<"The string is not palindrome";
    }
    else{
        cout<<"The string is palindrome";
    }
}