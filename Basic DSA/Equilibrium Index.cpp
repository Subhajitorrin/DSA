#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {
    // get the size of the array
    int n=arr.size();

    // create a sum array with the size of n
    int sum[n];

    // create a temp variable to build sum array
    int temp=0;

    // run a loop and store total sum till ith index in sum
    for(int i=0;i<n;i++){
        temp+=arr[i];
        sum[i]=temp;
    }

    // traverse a loop to n
    for(int i=0;i<n;i++){

        // get left sum from ith index
        int left = sum[i]-arr[i];

        // get right sum from ith index
        int right = sum[n-1] - sum[i];

        // if both are same then i is Equilibrium Index
        if(left == right)return i;
    }

    // if no Equilibrium Index then return -1
    return -1;
}