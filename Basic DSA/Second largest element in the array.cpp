#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // create two variables to store larges and second largest
    int lar = INT_MIN,slar=INT_MIN;

    // run a loop from 0 to less than size of the vector
    for(int i=0;i<arr.size();i++){

        /*
        if ith index element is greater than element present in largest variable
        then at first store the largest element into second largest variable
        then store the ith index element into largest variable
        */
        if(arr[i]>lar){
            slar = lar;
            lar=arr[i];
        }
        
        /*
        if ith index element is smaller than largest element and greater than 
        second largest element then store the ith index element to slar variable
        */
        else if(arr[i]<lar && arr[i]>slar){
            slar=arr[i];
        }
    }

    /*
    if the second largest variable doesn't change 
    means no second largest variable present
    */ 
    if(slar!=INT_MIN)return slar;
    else return -1;
}