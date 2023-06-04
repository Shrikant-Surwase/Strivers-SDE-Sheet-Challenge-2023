#Sort 0,1,2
## Problem Statement
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
  
  CODE:

#METHOD 1:
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
  sort(arr, arr+n);
}

#METHOD 2:
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
  int high=n-1,mid=0,low=0;
  while(mid <= high){
     if(arr[mid] == 0){
        swap(arr[mid], arr[low]);
        mid++;low++;
     }else if(arr[mid] == 1){
        mid++;
     }else{
        swap(arr[mid], arr[high]); high--;
     }
  }
}
