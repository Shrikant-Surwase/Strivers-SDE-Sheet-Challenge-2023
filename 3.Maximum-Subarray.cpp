# Maximum Subarray
## Problem Statement

Given an integer array nums, find the
subarray
with the largest sum, and return its sum.
  
 CODE:

#include <bits/stdc++.h> 

long long maxSubarraySum(int arr[], int n)

{

    long long crntSum=0;

    long long maxSum = INT_MIN; 

    for(int i=0; i<n; i++){

        crntSum+=arr[i];

        if(crntSum < 0){

            crntSum=0;

        }

    maxSum=max(maxSum, crntSum);

    }

    return maxSum;

}
