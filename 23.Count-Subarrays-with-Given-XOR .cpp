@Count Subarrays with Given XOR 
@Problem Statement

Given an array of integers A and an integer B. Find the total number 
of subarrays having bitwise XOR of all elements equal to k.
  
  CODE:
Same here we can use prefix sum approch to oslve this problem


#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int ans=0;
    unordered_map<int,int>mp;
    mp[0]=1;
    int sum=0;
    for(int i=0; i<arr.size(); i++){
     sum ^= arr[i];
     if(mp.find(sum^x) == mp.end()) mp[sum]++;
     else {
         ans+=mp[sum^x];
         mp[sum]++;
     }
    }
    return ans;
}
