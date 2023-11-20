//number of vowel and consonent in a string
#include<bits/stdc++.h>
using namespace std;
int  main()
{
    string str="Hello my name is Ritwik Bhowmik";
    int vcount=0;
    int ccount=0;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
            vcount++;
        }
        else if(ch==' '){
           
        }
        else{
            ccount++;
        }
    }
    cout<<vcount;
    cout<<endl;
    cout<<ccount;
}