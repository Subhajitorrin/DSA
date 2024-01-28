void spiralPrint(int **input, int nRows, int nCols)
{
    int top = 0, left = 0, right = nCols-1, bottom = nRows-1;
    
    while(top<=bottom && left<=right){
        // right traverse
        for(int i=left;i<=right;i++){
           cout<<input[top][i]<<" ";
        }
        top++;

        // bottom traverse
        for(int i=top;i<=bottom;i++){
            cout<<input[i][right]<<" ";
        }
        right--;

        // left traverse
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<input[bottom][i]<<" ";
            }
            bottom--;
        }

        // top traverse
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<input[i][left]<<" ";
            }
            left++;
        }
    }
}