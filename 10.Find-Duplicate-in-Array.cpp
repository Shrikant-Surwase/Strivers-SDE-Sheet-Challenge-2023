#Find Duplicate in Array
##Problem Statement

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space


CODE:
#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	sort(arr.begin(), arr.end());
	for(int i=0; i<n-1; i++){
		if(arr[i] == arr[i+1]){
			return arr[i];
		}
	}
}
