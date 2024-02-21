#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target){

    // using two pointer approach we need starting and ending index
    // and a counter to track how many pairs are present
	int left=0,right=n-1,count=0;

    // traversing the array using two pointer
	while(left<right){

        // if the pair is equal to target then
        // count will increase
        // left will increase and right will decrease
		if(arr[left]+arr[right]==target){
			count++;
			left++;
			right--;

        // if sum is greater than target we need to decrease the sum so decrease right
		}else if(arr[left]+arr[right]>target){
			right--;

        // if sum if smaller we need to increase the sum so increase the left
		}else{
			left++;
		}
	}
	
    // if count is 0 means no pair is found then return -1
    // else return the count
	if(count==0)return -1;
	else return count;
}