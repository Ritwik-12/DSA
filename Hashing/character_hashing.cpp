//character hashing in case of lowercase letter

#include<bits/stdc++.h>
using namespace std;


int main()
{

    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;

    //creatina an hash array of size 26 beaceus there can be
    //at max 26 character in case of lower case

    int hash[26]={0};

    //pre computation
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a'] +=1;
    }

    int q;
    cout<<"Enter the no of queries";
    cout<<endl;
    cin>>q;
    char ch;
    while(q>0){
        cout<<"Enter the character to find its frequenct"<<endl;
        cin>>ch;
        //fetch it

        cout<<"the character appears "<<hash[ch-'a']<<" times";
        q--;
        cout<<endl;

    }
}