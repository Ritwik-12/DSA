#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int number,div;
    cout<<"Enter the first number";
    cin>>number;
    cout<<"Enter the subtract number";
    cin>>div;
    int sec_num=number-div;
    cout<<number<<" ";
    cout<<sec_num<<" ";
    

        int c=2;
    for(int i=2;i<10;i++){


        int new_num=(sec_num-div)+c;
        cout<<new_num<<" ";
        sec_num=new_num;
        c=c+2;
    }

}