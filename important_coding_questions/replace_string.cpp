#include<bits/stdc++.h>
using namespace std;
string remove_vowel(string str){
       
        string new_str="";
        char arr[10]={'a','e','i','o','u','A','E','I','O','U'};
    
        for(int i=0;i<str.length();i++){
            int j=0;
            bool is_vowel=false;
            while(j<10){
                if(arr[j]==str[i]){
                   is_vowel=true;
                   break;
                }
                j++;
            }
                if(!is_vowel){
                    new_str.push_back(str[i]);
                }
            }
          
        
    cout<<new_str;
}
   
int main()
{

    string str="ritwik";

      int ass;
      int newass;
      for(int i=0;i<str.size();i++){
        ass=str[i];
        newass=ass+1;
        str[i]=newass;
      }
     remove_vowel(str);
}