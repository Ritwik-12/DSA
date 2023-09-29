//convert a decimal nuber to its corresponding roman number
#include<bits/stdc++.h>
using namespace std;
string convert_roman(int number){

    int num[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};

    int i=12;

    while(number>0){
        int quesent=number/num[i];
        number=number%num[i];
        while(quesent--){
            cout<<sym[i];
        }
        i--;
    }
}
int main(){

int number;
cout<<"Enter the number";
cin>>number;

convert_roman(number);

}