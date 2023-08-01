//check palindrome for string with special character
#include<bits/stdc++.h>
using namespace std;
void modified_string(char ch[]){

    if(ch==nullptr){
        return;
    }

         int j=0;
       for(int i=0;ch[i]!='\0';i++){
        if(ch[i]!=' '){
           ch[j++]=ch[i];
        }
    }
    ch[j]='\0';

    //romove any special chracter

    

    
}
int main()
{
    int maxsize=100;

   char ch[maxsize];
   cout<<"Enter the string"<<endl;
   cin.getline(ch,maxsize);
   modified_string(ch);
   cout<<ch;
   cout<<endl;
  
}