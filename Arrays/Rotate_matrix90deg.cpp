#include<bits/stdc++.h>
using namespace std;

void rotate(int matrix[][3]){

    int n=3;


int temp[3][3];
for(int i=0;i<n;i++){
    int id=n-1;
    for(int j=0;j<n;j++){

        temp[i][j]=matrix[id][i];
        id--;
    }
   
}
    //printing the matrix

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }

}


int main()
{

    int matrix[][3]={{1,3,4},{5,6,9},{7,8,4}};

    rotate(matrix);


}