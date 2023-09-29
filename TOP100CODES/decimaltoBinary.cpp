//convert the given decimal number into binary
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int decnumber;
    cout<<"Enter the decimal number";
    cin>>decnumber;
    int num=0;
    int binarynum=0;
    while(decnumber>0){  //12 //6
        int rem=decnumber%2; //0  //0
        for(int i=0;i<num;i++){  //1
            rem=rem*10;  // 0
        }
        num++;//1 //2
        binarynum=binarynum+rem; //0 //0
        decnumber=decnumber/2;//6 //3
    }
    cout<<binarynum<<" ";
}