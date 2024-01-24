#include <bits/stdc++.h> 
bool isPossible(int *arr, int n)
{
    /*
    decalre a variable to track if more than one element is greater
    */
    int count=0;

    // run a loop from 1 to end
    for(int i=1;i<n;i++){

        // if the previous elemnt is greater then enter the block
        if(arr[i-1]>arr[i]){

            // increase the count
            count++;

            // if more than one count return false
            if(count>1)return false;

            // if the 0th index is greater replace with 1th index
            if(i==1)arr[i-1]=arr[i];

            // if i-2 is greater then replace i with i-1
            else if(arr[i-2]>arr[i])arr[i]=arr[i-1];

            // if i-2 is lesser then replace i-1 with i
            else arr[i-1]=arr[i];
        }
    }

    // if the false doesn't trigger then return true
    return true;
}