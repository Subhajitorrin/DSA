#include <bits/stdc++.h> 
int coverageOfMatrix(vector<vector<int>> &mat) {
    // getting the length of rows
    int row = mat.size();

    // getting the length of collumns
    int col = mat[0].size();

    // variable to calclulate sum
    int sum=0;

    // traversing the mattix
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){

            // if 0 present in the index
            if(mat[i][j]==0){
                // no else if because 1 can be more times
                // left check
                if(j-1>=0 && mat[i][j-1]==1)sum++;
                // right check
                if(j+1<=col-1 && mat[i][j+1]==1)sum++;
                // top check
                if(i-1>=0 && mat[i-1][j]==1)sum++;
                // bottom check
                if(i+1<=row-1 && mat[i+1][j]==1)sum++;
            }
        }
    }

    // return the sum
    return sum;
}
