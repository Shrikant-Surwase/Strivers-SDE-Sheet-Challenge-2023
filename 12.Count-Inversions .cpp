#Count Inversions 
##Problem Statement
Given an array of N integers, count the inversion of the array.

What is an inversion of an array? Definition: for all i & j < size of array, if i < j 
then you have to find pair (A[i],A[j]) such that A[j] < A[i].
  
  
CODE:#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // Write your code here.
    int ans=0;
    for(int i=0; i<n-1; i++){
       for(int j=i+1; j<n; j++){
           if(arr[i] > arr[j]) ans++;
       }
    }
    return ans;
}
