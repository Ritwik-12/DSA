#include<bits/stdc++.h>
using namespace std;
void transpose(vector<vector<int>> &matrix){

    int n=matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
  vector<vector<int>> matrix={{1,2,3},
                              {4,5,6},
                              {1,4,5}};

  transpose(matrix);

}