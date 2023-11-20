//remove white spaces from a string
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="  he is a man and his name is raka";

    int count=0;
    for(int i=0;i<s.length();i++){
          
        if(s[i]!=' '){
            s[count++]=s[i];
        }
          
    }
    s.erase(count);
    cout<<s;
   
}