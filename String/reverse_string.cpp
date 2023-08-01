#include<bits/stdc++.h>
using namespace std;
int length_string(char ch[]){

    int len=0;
    for(int i=0;ch[i]!='\0';i++){
        len++;
    }
    return len;
}
void reverse(char ch[],int length){

    int i=0;
    int j=length-1;
    while(i<=j){
        swap(ch[i++],ch[j--]);
    }


}
int main()
{

    char ch[10];
    cout<<"Enter your name"<<endl;
    cin>>ch;
    cout<<"Your name is "<< ch;
    cout<<endl;
    int length=length_string(ch);
    cout<<"The length of the string is "<<length;
    cout<<endl;
    reverse(ch,length);
    cout<<"The string after reverse is "<<endl<<ch;
    

   
}