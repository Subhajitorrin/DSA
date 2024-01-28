#include <bits/stdc++.h> 
bool isMatrixSymmetric(vector<vector<int>> matrix){
    // get the row size
    int row = matrix.size();

    // get the column size
    int col = matrix[0].size();

    // traverse the matrix
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]!=matrix[j][i])return false;
        }
    }

    // if no false trigger return false
    return true;
}