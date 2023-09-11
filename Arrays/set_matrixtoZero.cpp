//set matrix to zero -brute forece approach
#include<bits/stdc++.h>
using namespace std;
void markRow(vector<vector<int>>&matrix,int i,int m,int n){
    for(int j=0;j<m;j++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}
void markCol(vector<vector<int>>&matrix,int j,int m,int n){
    for(int i=0;i<m;i++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}
vector<vector<int>> setMatrixToZero(vector<vector<int>> &matrix,int n,int m)
{
        //traverse over the matrix

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    markRow(matrix,i,m,n);
                    markCol(matrix,j,m,n);
                }
            }
        }

        //convert zero to all the mark element

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==-1){
                    matrix[i][j]=0;
                }
            }
        }
        return matrix;
}
// void print_Matrix(vector<vector<int>>&matrix,int n,int m){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
int main()

{

        vector<vector<int>> matrix={{1,2,3},{3,0,9},{1,2,0}};
        int n=matrix.size();
        int m=matrix[0].size();

       vector<vector<int>> ans= setMatrixToZero(matrix,n,m);

        // print_Matrix(matrix,n,m);

        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

        





}