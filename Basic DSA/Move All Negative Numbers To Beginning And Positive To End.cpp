#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int left=0,right=nums.size()-1;
    while(left<right){

// if left side is negetive and right side is positive then just left++ right--
        if(nums[left]<0 && nums[right]>0){
            left++;
            right--;

// if left side is positive and right side is negetive then swap and left++ right--
        }else if(nums[left]>0 && nums[right]<0){
            swap(nums[left++],nums[right--]);

// if both side is negetive then left++
        }else if(nums[left]<0 && nums[right]<0){
            left++;

// if both side is positive right--
        }else{
            right --;
        }
    }

    return nums;
}