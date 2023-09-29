//print your name using recursion 5 times

#include<bits/stdc++.h>
using namespace std;
void printname(string name,int i=5){
    //base case
    if(i==0)
        return;
    cout<<name<<endl;
    printname(name,i-1);
}
int main()
{
    string name="Ritwik";
    printname(name);

}