//we need to go from a source to a destination using recursion
//return statement is mendatory in base case
#include<bits/stdc++.h>
using namespace std;
void reachome(int src,int dest){
    //base case
    cout<<"source "<<src<<" "<<"destination "<<dest<<endl;
    if(src==dest){
        cout<<"back to home";
        return;
    }
    src++;
    reachome(src,dest);

}
int main()
{

    int src=1;
    int dest=10;
    reachome(src,dest);
}