#include<bits/stdc++.h>
using namespace std;
string reverse_word(string s){

    string ans="";
    string temp="";

    int left=0;
    int right=s.length()-1;
    //we will point the left pointer to the first not empty character
    while(s[left]==' '){
        left++;
    }
    //pointin the right pointer at the last non empy character
    while(s[right]==' '){
        right--;
    }

    //now we will reverse the words

    while(left<=right){

        if(s[left]!=' '){
            temp+=s[left];
        }
        else{
            if(s[left-1]==' '){
                left++;
                continue;
            }
            else{
                ans=temp+" "+ans;
                temp="";
            }
        }
        left++;
    }
    ans=temp+" "+ans;
    ans.erase(ans.begin()+ans.length()-1);
    return ans;
}
int main()
{
    string s=" Blue  sky ";
    string reverse=reverse_word(s);
    cout<<reverse;
    
}