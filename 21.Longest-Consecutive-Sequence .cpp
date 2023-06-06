@ Longest Consecutive Sequence 
@ Problem Statement

You are given an array of ‘N’ integers.
You need to find the length of the longest sequence which contains the consecutive elements.
  
CODE:
#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
    int ans=0;
    int currs = 1;
    for(int i=1; i<n; i++){
        if(arr[i] == arr[i-1]) continue;
        else if(arr[i]==arr[i-1]+1) currs++;
        else{
            ans = max(ans, currs);
            currs=1;
        }
    }
    ans = max(ans, currs);
    return ans;
    
}
