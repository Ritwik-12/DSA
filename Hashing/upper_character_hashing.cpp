//character hashing for upper case letter

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string ";
    cin>>str;

    //create a hash array
    int hash[26]={0};

    //pre-compute

    for(int i=0;i<str.size();i++){
            hash[str[i]-'A']+=1;
    }

    int q;
    cout<<"Enter the number of queries"<<endl;
    cin>>q;
    char ch;
    while(q>=0){
        cout<<"Enter the character to find its occurence"<<endl;
        cin>>ch;
        //fetching
        cout<<"The character occurs "<<hash[ch-'A']<<" times"<<endl;
        q--;
    }

}