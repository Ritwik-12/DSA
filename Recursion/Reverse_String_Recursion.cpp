//Problem stastement-> Reverse a string using recursion.

/*

    in this we take two pointers i and j
    base case if i>j return

    now we have to solve one prbolme and remaning recursion will solve
    for example if we take a string abcdef here the i pointer will points
    to the first of the string and j pointer will points to the end of
    the stirn. 
*/

#include<iostream>
using namespace std;

void reverse(string &s,int i,int j){

    //base case
    if(i>j)
         return;
    
    //solving one condition
    swap(s[i],s[j]);
    i++;
    j--;
    //recursive function to solve rest of the problems
    reverse(s,i,j);
}
int main()
{
    string s="abcdef";

    reverse(s,0,s.length()-1);

    cout<<endl;
    cout<<s;

}