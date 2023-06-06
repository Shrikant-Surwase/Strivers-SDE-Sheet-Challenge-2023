# Pair Sum 
#Problem Statement

You are given an integer array 'ARR' of size 'N' and an
integer 'S'. Your task is to return the list of all pairs of
elements such that each sum of elements of each pair
equals 'S'.
  
CODE:
#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>>ans;
   sort(arr.begin(), arr.end());
   for(int i=0; i<arr.size()-1; i++){
      for(int j=i+1; j<arr.size(); j++){
         if(arr[i]+arr[j] == s) ans.push_back({arr[i], arr[j]});
}
}
return ans;
}
