//code to modiy a input string into lowercase and romoving the spacial characters

#include<bits/stdc++.h>
using namespace std;
string modify_string(char ch[]){

        string modified;
        for(int i=0;ch[i]!='\0';i++){
            if(isalnum(ch[i])){
                    modified+=ch[i];
            }
        }
        return modified;
}
int main()
{
    char ch[10];
    cout<<"Enter the string";
    cin>>ch;

    cout<<endl<<"The input string is "<<ch;
    cout<<endl;
    string result=modify_string(ch);
    cout<<"The modifien string is "<<endl;
    cout<<result;

}