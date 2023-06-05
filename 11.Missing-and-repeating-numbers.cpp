#Missing and repeating numbers 
##Problem Statement

You are given a read only array of n integers from 1 to n.

Each integer appears exactly once except A which appears twice and B which is missing.

Return A and B.
  
CODE:

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	sort(arr.begin(), arr.end());
	int repeat;
	for(int i=0; i<n-1; i++){
		if(arr[i] == arr[i+1]){
			repeat = arr[i];
			arr[i]=0;
			break;
		}
	}
	int total = accumulate(arr.begin(), arr.end(), 0);
	int miss = n*(n+1)/2 - total;
	return {miss, repeat};
}

