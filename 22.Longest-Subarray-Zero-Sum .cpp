@Longest Subarray Zero Sum 
@Problem Statement

Given an array containing both positive and negative integers, we have to find the length of the longest subarray 
with the sum of all elements equal to zero.
  
  CODE:
Here we can use prefix sum to calculate the max length of the subarray whose sum is zero

#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  //prefix sum to solve these problem effectively
  int ans=0;
  int sum =0;
  unordered_map<int,int>mp;
  for(int i=0; i<arr.size(); i++){
    sum += arr[i];
    if(sum == 0) ans=i+1;
    else if(mp.find(sum) != mp.end()) ans=max(ans, i-mp[sum]);
    else mp[sum]=i;
  }
  return ans;
}
