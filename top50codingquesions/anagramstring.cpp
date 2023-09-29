//a anagram string is a string which contaisn the same
//character as the original string but the order of
//the character may different

#include<bits/stdc++.h>
using namespace std;
bool check_angram(string &str,string &ana){
    int i=0;
     bool flag;
    while(i<str.length()){
         flag=false;
            for(int  j=0;j<ana.length();j++){
                if(str[i]==ana[j]){
                        flag=true;
                }
            }
            if(flag==false){
                break;
               
            }
            i++;
            
    }
    return flag;
}
int main(){
    string str="Hellokk";
    string ana="oHello";

    bool isana=check_angram(str,ana);
    cout<<isana<<endl;
    if(isana){
        cout<<"Teh string are anagram";
    }
    else{
        cout<<"The string are not anagram";
    }
}