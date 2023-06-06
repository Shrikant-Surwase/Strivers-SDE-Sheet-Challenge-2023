#Majority element 
#Problem Statement

A majority element is an element that
occurs more than floor('N' / 2) times in
the array

CODE:
#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	unordered_map<int,int>mp;
	for(int i=0; i<n; i++) mp[arr[i]]++;
    int ans = -1;
	int f = floor(n/2);
	for(auto i: mp){
		if(i.second > f){
			ans = i.first;
		}
	}
	return ans;
	
}
