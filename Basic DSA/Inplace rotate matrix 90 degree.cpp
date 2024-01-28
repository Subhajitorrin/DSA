#include <bits/stdc++.h> 
void inplaceRotate(vector<vector<int>> &inputArray)
{
    // getting the length of the matrix
    int n=inputArray.size();

    // transpose the matrix
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            swap(inputArray[i][j],inputArray[j][i]);
        }
    }

    // reverse the rows of the matrix
    reverse(inputArray.begin(),inputArray.end());
}