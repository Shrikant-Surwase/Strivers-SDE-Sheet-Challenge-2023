#Find Four Elements That Sums To A Given Value 
##Problem Statement

Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.
  
  
CODE:
#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
    for(int i=0; i<n-3; i++){
        for(int j=i+1; j<n-2; j++){
            int k=j+1,m=n-1;
            while (k < m) {
              int sum = arr[i] + arr[j] + arr[k] + arr[m];
              if (sum == target)
                return "Yes";
              else if (sum < target)
                k++;
              else
                m--;
            }
        }
    }
    return"No";
}
