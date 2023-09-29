//count the frequecy of a letter  in a string
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str="Hello worldoops";
    char c='o';
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==c){
            count++;
        }
    }
    cout<<count<<" ";
}