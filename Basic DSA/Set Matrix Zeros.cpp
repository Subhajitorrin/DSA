#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// getting size of the row
	int n = matrix.size();

	// getting size of the column
	int m = matrix[0].size();

	// create an array for row with size of row
	int row[n]={0};

	// create an array for column with size of column
	int col[m]={0};

	// traverse the complete matrix
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			// set row and col array with 1 on the specific index
			if(matrix[i][j]==0){
				col[j]=1;
				row[i]=1;
			}
		}
	}

	// traverse row and col array together like a matrix
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){

			// if the row or column have 1 set that matrix index to 0
			if(row[i]==1 || col[j]==1){
				matrix[i][j]=0;
			}
		}
	}

}