#include<bits/stdc++.h>
using namespace std;
int find_length(char ch[]){
    int len=0;
    for(int i=0;ch[i]!='\0';i++){
        len++;
    }
    return len;
}
//converr the uppercase into lowercase 
void to_lowercase(char ch[]){

    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]>='A' && ch[i]<='Z'){
            int diff=ch[i]-'A';
            ch[i]='a'+diff;
        }
    }

}
int check_palindrome(char ch[],int length){
    
    int i=0;
    int j=length-1;
    while(i<=j){
        if(ch[i]!=ch[j])
        {
            return 0;
        }
        else{
            i++;
            j--;
        }
    }
    return 1;

}
int main(){

        char ch[10];
        cout<<"Enter the string to check if it is palindrome or not"<<endl;
        cin>>ch;
        int length=find_length(ch);
        cout<<"The length of the string is "<<endl<<length;
        cout<<endl;
        to_lowercase(ch);
        int check_palin=check_palindrome(ch,length);
        if(check_palin==0){
            cout<<"The string is not palindroem";
        }
        else{
            cout<<"The string is palindrome";
        }

}