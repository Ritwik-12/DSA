//count the number of vowels in a string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[]={'A','E','I','O','U','a','e','i','o','u'};
    int len=10;
    string str="Hello world";
    int count=0;
    int n=str.length();
    for(int i=0;i<n;i++){
        for(int j=0;j<len;j++){
            if(str[i]==ch[j]){
                count++;
            }
        }
    }
    cout<<count<<" ";
}