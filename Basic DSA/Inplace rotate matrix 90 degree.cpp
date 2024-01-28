#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3,m=4;
    int matrix[n][m]={
        {1,2,3,0},
        {0,5,0,8},
        {6,0,7,9}
    };

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    return 0;
}