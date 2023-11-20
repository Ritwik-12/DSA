//find the no of words in a string
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="hello ji how are  you";
    int wordcount=0;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch==' '){
            wordcount++;
        }
    }
   
    cout<<wordcount;
}