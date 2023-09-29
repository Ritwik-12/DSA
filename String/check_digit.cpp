//chekc if a string contains digits or not
#include<bits/stdc++.h>
using namespace std;

int sum=0;
void find_digits(string str){
  string tem="0";
  int sum=0;
  for(int i=0;i<str.size();i++){

    char ch=str[i];
    if(isdigit(ch)){
        tem+=ch;
    }
    else{
        sum+=stoi(tem);
        tem='0';
    }
  }
  sum=sum+stoi(tem);
  cout<<sum;
}
int main(){

    string str="1abc23";
    find_digits(str);
}