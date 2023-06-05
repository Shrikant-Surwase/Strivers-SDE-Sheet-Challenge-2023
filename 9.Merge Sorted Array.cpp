#Merge Sorted Array
##Problem Statement

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, r
epresenting the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, 
nums1 has a length of m + n, where the first m elements denote the elements that should be merged, 
and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
  
  
CODE:
#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	vector<int>ans;
	for(int i=0; i<m; i++){
		if(arr1[i] != 0){
			ans.push_back(arr1[i]);
		}
	}
	for(int i=0; i<n; i++){
		if(arr2[i] != 0){
			ans.push_back(arr2[i]);
		}
	}
	sort(ans.begin(), ans.end());
	return ans;

}
